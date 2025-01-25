/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_long_overflow.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:14:08 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/25 18:14:28 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi_tests.h"

int	long_overflow(void)
{
	if (ft_atoi("99999999999999999999") == -1)
		return (0);
	else
		return (-1);
}
