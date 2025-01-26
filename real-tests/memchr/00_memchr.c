/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:27:59 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 10:10:17 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memchr_tests.h"

int	memchr_launch(int *total)
{
	t_list	*tests;
	int		total_pass;
	int		size;

	tests = NULL;
	load_test(&tests, new_test("MEMCHR", "basic_test", &basic_test_memchr));
	load_test(&tests, new_test("MEMCHR", "not_found", &not_found));
	load_test(&tests, new_test("MEMCHR", "eof", &eof_test));
	load_test(&tests, new_test("MEMCHR", "big_n", &big_n_test));
	size = ft_lstsize(tests);
	*total += size;
	total_pass = run_test(tests);
	print_result(total_pass, size);
	return (total_pass);
}
