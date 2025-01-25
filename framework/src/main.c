#include <libunit.h>

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

void	add_test_to_lst(t_list **lst, t_test *new)
{
	if (new == NULL)
	{
		// cleanup
		exit(EXIT_FAILURE);
	}
	ft_lstadd_back(lst, ft_lstnew((void *)new));
}

