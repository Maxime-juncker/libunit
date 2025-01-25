#include "strlen_tests.h"

int basic_test(void)
{
	if (ft_strlen_test("bonjour") == 7)
		return (0);
	else
		return (-1);
}
