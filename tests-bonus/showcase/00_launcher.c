/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:49:49 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 14:11:28 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	tests_launch(int *total)
{
	t_list	*tests;
	int		total_pass;
	int		size;

	tests = NULL;
	load_test(&tests, new_test("TEST-BONUS", "test-ok", &ok_test));
	load_test(&tests, new_test("TEST-BONUS", "test-ko", &ko_test));
	load_test(&tests, new_test("TEST-BONUS", "sigsegv", &segfault_test));
	load_test(&tests, new_test("TEST-BONUS", "bus-err", &bus_err_test));
	load_test(&tests, new_test("TEST-BONUS", "abort", &abort_test));
	load_test(&tests, new_test("TEST-BONUS", "sigfpe", &sigfpe_test));
	load_test(&tests, new_test("TEST-BONUS", "sigpipe", &sigpipe_test));
	load_test(&tests, new_test("TEST-BONUS", "sigpipe", &sigill_test));
	size = ft_lstsize(tests);
	*total += size;
	total_pass = run_test(tests);
	print_result(total_pass, size);
	return (total_pass);
}
