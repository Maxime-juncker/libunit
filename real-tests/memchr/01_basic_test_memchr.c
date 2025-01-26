/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test_memchr.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:31:33 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 10:43:49 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memchr_tests.h"

int	basic_test_memchr(void)
{
	if (ft_memchr("bonjour", 'u', 8) != NULL)
		return (0);
	else
		return (-1);
}
