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

// utils.c
int		print_result(int test_pass, int total);


// main.c
t_test	*new_test(const char *f_name, const char *t_name, int (*f)(void));
void	load_test(t_list **lst, t_test *new);

// tester.c
int	run_test(t_list *tests);

//! tmp (to delete)
int	test_OK(void);
int	test_KO(void);
int	test_segv(void);
int	test_bus_err(void);

#endif