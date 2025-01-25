/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_calloc.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:31:33 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/25 18:21:56 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calloc_tests.h"

int	basic_test_calloc(void)
{
	if (check_malloc(ft_calloc(5, sizeof(int)), 0) == 1)
		return (0);
	else
		return (-1);
}
