/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:49:49 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 11:22:29 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	tests_launch(int *total)
{
	t_list	*tests;
	int		total_pass;
	int		size;

	tests = NULL;
	load_test(&tests, new_test("TEST", "test-ok", &ok_test));
	load_test(&tests, new_test("TEST", "test-ko", &ko_test));
	load_test(&tests, new_test("TEST", "sigsegv", &segfault_test));
	load_test(&tests, new_test("TEST", "bus-err", &bus_err_test));
	size = ft_lstsize(tests);
	*total += size;
	total_pass = run_test(tests);
	print_result(total_pass, size);
	return (total_pass);
}
