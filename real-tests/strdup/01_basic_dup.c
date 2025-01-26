/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_dup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:31:33 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 10:35:35 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calloc_tests.h"

int	basic_strdup(void)
{
	if (cmp_malloc(ft_strdup("hello"), "hello", 5) == 0)
		return (0);
	else
		return (-1);
}
