#include <libunit.h>

int	print_result(int test_pass, int total)
{
	ft_printf("\ntests results: %d/%d ", test_pass, total);
	if (test_pass < total)
	{
		ft_printf("%s[KO]%s\n", RED, RESET);
		return (-1);
	}
	else
	{
		ft_printf("%s[OK]%s\n", GREEN, RESET);
		return (0);
	}
}
