/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:14:14 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 10:07:47 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libunit.h>

void	print_test(t_test *test, const char *res)
{
	ft_printf("[%s%s%s]:", GRAY, test->function_name, RESET);
	ft_printf("%s%s:%s\t", WHITE, test->test_name, RESET);
	if (ft_strncmp(res, "OK", 2) == 0)
		ft_printf("[%s%s%s]\n", GREEN, res, RESET);
	else if (ft_strncmp(res, "SIGSEGV", 2) == 0)
		ft_printf("[%s%s%s]\n", B_RED, res, RESET);
	else
		ft_printf("[%s%s%s]\n", RED, res, RESET);
}

int	print_result(int test_pass, int total)
{
	ft_printf("tests results: %d/%d ", test_pass, total);
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

int	check_malloc(void *func_return, int expected_null)
{
	if (expected_null && func_return == NULL)
	{
		free(func_return);
		return (1);
	}
	else if (!expected_null && func_return != NULL)
	{
		free(func_return);
		return (1);
	}
	free(func_return);
	return (1);
}
