/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic_underflow.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:34:48 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/25 18:13:34 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi_tests.h"

int	basic_underflow(void)
{
	if (ft_atoi("-2147483649") == 2147483647)
		return (0);
	else
		return (-1);
}
