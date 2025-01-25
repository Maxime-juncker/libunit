#include "atoi_tests.h"

int basic_underflow(void)
{
	if (ft_atoi("-2147483649") == 0)
		return (0);
	else
		return (-1);
}
