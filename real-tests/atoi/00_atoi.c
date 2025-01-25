/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:34:15 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/25 19:29:26 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi_tests.h"

int	atoi_launch(int *total)
{
	t_list	*tests;
	int		total_pass;

	tests = NULL;
	if (IGNORE_0 == 0)
	{
		(*total)++;
		load_test(&tests, new_test("ATOI", "basic_test", &basic_test_atoi));
	}
	if (IGNORE_1 == 0)
	{
		(*total)++;
		load_test(&tests, new_test("ATOI", "null_test", &null_test));
	}
	if (IGNORE_2 == 0)
	{
		(*total)++;
		load_test(&tests, new_test("ATOI", "basic_overflow", &basic_overflow));
	}
	if (IGNORE_3 == 0)
	{
		(*total)++;
		load_test(&tests, new_test("ATOI", "basic_underflow", \
		&basic_underflow));
	}
	if (IGNORE_4 == 0)
	{
		(*total)++;
		load_test(&tests, new_test("ATOI", "long_overflow", &long_overflow));
	}
	if (IGNORE_5 == 0)
	{
		(*total)++;
		load_test(&tests, new_test("ATOI", "long_underflow", &long_underflow));
	}
	total_pass = run_test(tests);
	return (total_pass);
}
