/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_bus_error.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:52:48 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 15:11:28 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <libunit.h>

int	cause_bus_error(void)
{
	char	buffer[sizeof(int) + 1];
	int		*iptr;

	__asm__("pushf\norl $0x40000,(%rsp)\npopf");
	iptr = (int *)(buffer + 1);
	*iptr = 42;
	return (0);
}
