#include <libunit.h>
#include <libft.h>

int	main(void)
{
	t_list	*tests;
	tests = NULL;

	add_test_to_lst(&tests, new_test("test01", "OK_test", &test_OK));
	add_test_to_lst(&tests, new_test("test02", "OK_test", &test_OK));
	add_test_to_lst(&tests, new_test("test03", "KO_test", &test_KO));
	add_test_to_lst(&tests, new_test("test04", "segfault", &test_segv));
	add_test_to_lst(&tests, new_test("test05", "bus err", &test_bus_err));

	run_test(tests);
}