/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 13:51:52 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/25 10:03:24 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	debug_color(const char *msg, const char *color)
{
	ft_printf("%s%s\033[0m\n", color, msg);
}

void	success(const char *msg)
{
	debug_color(msg, GREEN);
}

void	warning(const char *msg)
{
	debug_color(msg, YELLOW);
}

void	alert(const char *msg)
{
	debug_color(msg, B_RED);
}

void	error(const char *msg)
{
	debug_color(msg, RED);
}
