#include <libft.h>
#include <libunit.h>
#include "atoi_tests.h"

int	atoi_launch(void)
{
	t_list	*tests;
	tests = NULL;

	load_test(&tests, new_test("ATOI", "basic_test", &basic_test));
	load_test(&tests, new_test("ATOI", "NULL_test", &NULL_test));
	load_test(&tests, new_test("ATOI", "basic_overflow", &basic_overflow));
	load_test(&tests, new_test("ATOI", "basic_underflow", &basic_underflow));


	load_test(&tests, new_test("test04", "segfault", &test_segv));
	load_test(&tests, new_test("test05", "bus_err", &test_bus_err));

	run_test(tests);
	return (0);
}