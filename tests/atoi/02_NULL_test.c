#include "atoi_tests.h"

int NULL_test(void)
{
	if (ft_atoi(NULL) == 0)
		return (0);
	else
		return (-1);
}
