/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:27:59 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 10:40:15 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strdup_tests.h"

int	strdup_launch(int *total)
{
	t_list	*tests;
	int		total_pass;
	int		size;

	tests = NULL;
	load_test(&tests, new_test("STRDUP", "basic_dup", &basic_strdup));
	load_test(&tests, new_test("STRDUP", "bigger_dup", &bigger_dup));
	load_test(&tests, new_test("STRDUP", "null_dup", &null_dup));
	size = ft_lstsize(tests);
	*total += size;
	total_pass = run_test(tests);
	print_result(total_pass, size);
	return (total_pass);
}
