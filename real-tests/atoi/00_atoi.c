/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:34:15 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 12:13:51 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi_tests.h"

int	atoi_launch(int *total)
{
	t_list	*tests;
	int		total_pass;
	int		size;

	tests = NULL;
	load_test(&tests, new_test("ATOI", "basic_test", &basic_test_atoi));
	load_test(&tests, new_test("ATOI", "zero_test", &zero_test));
	load_test(&tests, new_test("ATOI", "basic_overflow", &basic_overflow));
	load_test(&tests, new_test("ATOI", "basic_underflow", &basic_underflow));
	load_test(&tests, new_test("ATOI", "long_overflow", &long_overflow));
	load_test(&tests, new_test("ATOI", "long_underflow", &long_underflow));
	size = ft_lstsize(tests);
	total_pass = run_test(tests);
	print_result(total_pass, size);
	*total += size;
	return (total_pass);
}
