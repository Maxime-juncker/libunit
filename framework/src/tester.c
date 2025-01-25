#include <libunit.h>

int	check_test(t_test *test, int code)
{
	// check process exit code
	if (WTERMSIG(code) == SIGSEGV)
	{
		ft_printf("%s%s:%s:[SEGV]\n%s", RED, test->function_name, test->test_name, RESET);
		return (0);
	}
	if (WTERMSIG(code) == SIGBUS)
	{
		ft_printf("%s%s:%s:[SIGBUS]\n%s", RED, test->function_name, test->test_name, RESET);
		return (0);
	}
	if (WEXITSTATUS(code) == 0)
	{
		ft_printf("%s%s:%s:[OK]\n%s", GREEN, test->function_name, test->test_name, RESET);
		return (1);
	}
	//* 255 = -1 (unsigned)
	ft_printf("%s%s:%s:[KO]\n%s", RED, test->function_name, test->test_name, RESET);
	return (0);
}



int	run_test(t_list *tests)
{
	int	total;
	int	test_pass;
	int	code;
	int	pid;

	total = ft_lstsize(tests);
	test_pass = 0;
	while (tests != NULL)
	{
		pid = fork();
		t_test *test;

		test = (t_test*)(tests->content);
		if (pid == 0)
		{
			exit(test->f());
		}
		wait(&code);
		test_pass += check_test(test, code);
		tests = tests->next;
	}
	print_result(test_pass, total);
	return (0);
}

t_test	*new_test(const char *f_name, const char *t_name, int (*f)(void))
{
	t_test	*new_test;

	new_test = malloc(sizeof(t_test));
	if (new_test == NULL)
		return (NULL);
	new_test->function_name = f_name;
	new_test->test_name = t_name;
	new_test->f = f;

	return (new_test);
}

void	load_test(t_list **lst, t_test *new)
{
	if (new == NULL)
	{
		// cleanup
		exit(EXIT_FAILURE);
	}
	ft_lstadd_back(lst, ft_lstnew((void *)new));
}