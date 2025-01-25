#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <libft.h>
# include <sys/wait.h>
#include <signal.h>

typedef struct s_test
{
	const char	*test_name;
	const char	*function_name;
	int			(*f)(void);
}	t_test;

// main.c
t_test	*new_test(const char *f_name, const char *t_name, int (*f)(void));
void	add_test_to_lst(t_list **lst, t_test *new);

// tester.c
int	run_test(t_list *tests);

//! tmp (to delete)
int	test_OK(void);
int	test_KO(void);
int	test_segv(void);
int	test_bus_err(void);

#endif