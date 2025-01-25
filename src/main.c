#include <libunit.h>

t_test	*new_test(const char *f_name, const char *t_name, int (*f)(void), int tmp)
{
	t_test	*new_test;

	new_test = malloc(sizeof(t_test));
	if (new_test == NULL)
		return (NULL);
	new_test->function_name = f_name;
	new_test->test_name = t_name;
	new_test->f = f;

	new_test->exit_code = tmp;

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

int	main(void)
{
	t_list	*tests;
	tests = NULL;

	add_test_to_lst(&tests, new_test("test01", "OK_test", &test_OK, 0));
	add_test_to_lst(&tests, new_test("test02", "OK_test", &test_OK, 0));
	add_test_to_lst(&tests, new_test("test03", "KO_test", &test_KO, 0));
	add_test_to_lst(&tests, new_test("test04", "segfault", &test_segv, 0));
	add_test_to_lst(&tests, new_test("test05", "bus err", &test_bus_err, 0));

	run_test(tests);
}