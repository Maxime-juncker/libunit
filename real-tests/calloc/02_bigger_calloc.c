/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_bigger_calloc.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:35:00 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/25 17:54:57 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calloc_tests.h"

int	bigger_test(void)
{
	if (check_malloc(ft_calloc(512, sizeof(int)), 0) == 1)
		return (0);
	else
		return (-1);
}
