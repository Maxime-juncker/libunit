/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:14:00 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/25 19:30:30 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <libft.h>
# include <sys/wait.h>
# include <signal.h>

typedef struct s_test
{
	const char	*test_name;
	const char	*function_name;
	int			(*f)(void);
}	t_test;

int		check_test(t_test *test, int code);
int		run_function(t_list *tests, t_list *first);
int		run_test(t_list *tests);
t_test	*new_test(const char *f_name, const char *t_name, int (*f)(void));
void	load_test(t_list **lst, t_test *new);

// utils.c
int		check_malloc(void *func_return, int expected_null);
int		print_result(int test_pass, int total);
void	print_test(t_test *test, const char *res);

#endif