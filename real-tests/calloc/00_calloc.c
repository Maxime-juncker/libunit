/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:27:59 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 10:09:18 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calloc_tests.h"

int	calloc_launch(int *total)
{
	t_list	*tests;
	int		total_pass;
	int		size;

	tests = NULL;
	load_test(&tests, new_test("CALLOC", "basic_test", &basic_test_calloc));
	load_test(&tests, new_test("CALLOC", "bigger_test", &bigger_test));
	load_test(&tests, new_test("CALLOC", "calloc_zero", &calloc_zero));
	size = ft_lstsize(tests);
	*total += size;
	total_pass = run_test(tests);
	print_result(total_pass, size);
	return (total_pass);
}
