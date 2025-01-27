/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 11:00:09 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/27 09:32:25 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libunit.h>
#include "showcase/tests.h"

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
	int	pass = 0;
	int	total = 0;

	/* ADD TEST HERE */
	//* pass += launch("test-name", &launcher-funciton, &total);

	pass += launch("tests", &tests_launch, &total);


	ft_printf("%s=== final result ===\n%s", YELLOW, RESET);
	print_result(pass, total);
}
