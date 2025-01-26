/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:14:14 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 14:20:14 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libunit.h>

int	print_test(t_test *test, const char *res)
{
	ft_printf("[%s%s%s]:", GRAY, test->function_name, RESET);
	ft_printf("%s%s:%s\t", WHITE, test->test_name, RESET);
	if (ft_strncmp(res, "OK", 2) == 0)
		ft_printf("[%s%s%s]\n", GREEN, res, RESET);
	else if (ft_strncmp(res, "SIGSEGV", 7) == 0)
		ft_printf("[%s%s%s]\n", B_RED, res, RESET);
	else if (ft_strncmp(res, "SIGBUS", 6) == 0)
		ft_printf("[%s%s%s]\n", B_YELLOW, res, RESET);
	else if (ft_strncmp(res, "SIGABRT", 6) == 0)
		ft_printf("[%s%s%s]\n", B_YELLOW, res, RESET);
	else if (ft_strncmp(res, "SIGFPE", 6) == 0)
		ft_printf("[%s%s%s]\n", B_YELLOW, res, RESET);
	else if (ft_strncmp(res, "SIGPIPE", 6) == 0)
		ft_printf("[%s%s%s]\n", B_YELLOW, res, RESET);
	else if (ft_strncmp(res, "SIGILL", 6) == 0)
		ft_printf("[%s%s%s]\n", B_YELLOW, res, RESET);
	else if (ft_strncmp(res, "KO", 2) == 0)
		ft_printf("[%s%s%s]\n", RED, res, RESET);
	else
		ft_printf("[%s%s%s]\n", WHITE, res, RESET);
	write_log(test, res);
	return (0);
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

int	cmp_malloc(void *v1, void *v2, size_t n)
{
	int	code;

	code = ft_memcmp(v1, v2, n);
	free(v1);
	return (code);
}

int	get_name_value(const char *str)
{
	int	value;

	value = 0;
	while (*str)
	{
		value += *str;
		str++;
	}
	return (value);
}
