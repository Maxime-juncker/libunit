/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_bigger_dup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 17:35:00 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 11:25:02 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calloc_tests.h"

int	bigger_dup(void)
{
	if (cmp_malloc(ft_strdup \
			("qwertyuiopasdfghjklqwertyuiopasdfghjklzxcvbnmzxcvbnm"),
			"qwertyuiopasdfghjklzxcvbnm", 26) == 0)
		return (0);
	else
		return (-1);
}
