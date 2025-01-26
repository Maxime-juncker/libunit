/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:34:04 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 10:03:28 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libunit.h>
#include "atoi/atoi_tests.h"
#include "calloc/calloc_tests.h"
#include "memchr/memchr_tests.h"

int	launch(const char *name, int (*f)(int *), int *total)
{
	int	passed;

	ft_printf("=== testing %s ===\n", name);
	passed = f(total);
	ft_printf("\n");
	return (passed);
}

int	main(void)
{
	int	pass;
	int	total;

	pass = 0;
	total = 0;
	pass += launch("atoi", &atoi_launch, &total);
	pass += launch("calloc", &calloc_launch, &total);
	pass += launch("memchr", &memchr_launch, &total);
	print_result(pass, total);
}
