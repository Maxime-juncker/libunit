#include "strlen_tests.h"

int NULL_test(void)
{
	if (ft_strlen_test(NULL) == 0)
		return (0);
	else
		return (-1);
}
