#include "atoi_tests.h"

int basic_overflow(void)
{
	if (ft_atoi("2147483648") == -1)
		return (0);
	else
		return (-1);
}
