/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:27:59 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/25 18:47:58 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calloc_tests.h"

int	calloc_launch(int *total)
{
	t_list	*tests;
	int		total_pass;

	tests = NULL;
	if (IGNORE_0 == 0)
	{
		(*total)++;
		load_test(&tests, new_test("CALLOC", "basic_test", &basic_test_calloc));
	}
	if (IGNORE_1 == 0)
	{
		(*total)++;
		load_test(&tests, new_test("CALLOC", "bigger_test", &bigger_test));
	}
	if (IGNORE_2 == 0)
	{
		(*total)++;
		load_test(&tests, new_test("CALLOC", "calloc_zero", &calloc_zero));
	}
	total_pass = run_test(tests);
	return (total_pass);
}
