/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:14:09 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 11:37:27 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libunit.h>

int	check_test(t_test *test, int code)
{
	if (WTERMSIG(code) == SIGSEGV)
		return (print_test(test, "SIGSEGV"));
	if (WTERMSIG(code) == SIGBUS)
		return (print_test(test, "SIGBUS"));
	if (WTERMSIG(code) == SIGABRT)
		return (print_test(test, "SIGABRT"));
	if (WTERMSIG(code) == SIGFPE)
		return (print_test(test, "SIGFPE"));
	if (WTERMSIG(code) == SIGPIPE)
		return (print_test(test, "SIGPIPE"));
	if (WTERMSIG(code) == SIGILL)
		return (print_test(test, "SIGILL"));
	if (WEXITSTATUS(code) == 0)
	{
		print_test(test, "OK");
		return (1);
	}
	return (print_test(test, "KO"));
}

int	run_function(t_list *tests, t_list *first)
{
	int		code;
	int		pid;
	int		(*f)(void);
	t_test	*test;

	pid = fork();
	test = (t_test *)tests->content;
	if (pid == -1)
		return (-1);
	if (pid == 0)
	{
		f = test->f;
		ft_lstclear(&first, &free);
		exit(f());
	}
	wait(&code);
	return (code);
}

int	run_test(t_list *tests)
{
	int		total;
	int		test_pass;
	int		code;
	t_list	*first;

	total = ft_lstsize(tests);
	test_pass = 0;
	first = tests;
	while (tests != NULL)
	{
		code = run_function(tests, first);
		test_pass += check_test((t_test *)tests->content, code);
		tests = tests->next;
	}
	ft_lstclear(&first, &free);
	return (test_pass);
}

t_test	*new_test(const char *f_name, const char *t_name, int (*f)(void))
{
	t_test	*new_test;

	new_test = malloc(sizeof(t_test));
	if (new_test == NULL)
	{
		error("failed malloc");
		return (NULL);
	}
	new_test->function_name = f_name;
	new_test->test_name = t_name;
	new_test->f = f;
	return (new_test);
}

void	load_test(t_list **lst, t_test *new)
{
	if (new == NULL)
	{
		ft_lstclear(lst, &free);
		exit(EXIT_FAILURE);
	}
	ft_lstadd_back(lst, ft_lstnew((void *)new));
}
