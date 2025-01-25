/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:27:59 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/25 18:49:18 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memchr_tests.h"

int	memchr_launch(int *total)
{
	t_list	*tests;
	int		total_pass;

	tests = NULL;
	if (IGNORE_0 == 0)
	{
		(*total)++;
		load_test(&tests, new_test("MEMCHR", "basic_test", &basic_test_memchr));
	}
	if (IGNORE_1 == 0)
	{
		(*total)++;
		load_test(&tests, new_test("MEMCHR", "not_found", &not_found));
	}
	if (IGNORE_2 == 0)
	{
		(*total)++;
		load_test(&tests, new_test("MEMCHR", "eof", &eof_test));
	}
	if (IGNORE_3 == 0)
	{
		(*total)++;
		load_test(&tests, new_test("MEMCHR", "big_n", &big_n_test));
	}
	total_pass = run_test(tests);
	return (total_pass);
}
