#include <libunit.h>
#include "strlen_tests.h"

int	strlen_launch(void)
{
	t_list	*tests;
	tests = NULL;

	load_test(&tests, new_test("STRLEN", "basic_test", &basic_test));
	load_test(&tests, new_test("STRLEN", "NULL_test", &NULL_test));

	run_test(tests);
	return (0);
}