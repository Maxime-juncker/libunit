/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_ok_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:53:51 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 11:24:21 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int	ok_test(void)
{
	if (ft_strlen("hello") == 5)
		return (0);
	else
		return (-1);
}
