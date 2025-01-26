/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:34:04 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 11:20:58 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libunit.h>
#include "atoi/atoi_tests.h"
#include "calloc/calloc_tests.h"
#include "memchr/memchr_tests.h"
#include "strdup/strdup_tests.h"

int	launch(const char *name, int (*f)(int *), int *total)
{
	int	passed;

	ft_printf("%s=== %stesting %s %s===\n", RESET, "\033[1;37m", name, RESET);
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
	pass += launch("strdup", &strdup_launch, &total);
	ft_printf("%s=== final result ===\n%s", YELLOW, RESET);
	print_result(pass, total);
}
