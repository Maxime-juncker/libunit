/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loging_disable.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:38:05 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 14:24:47 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libunit.h>

#if !BONUS

int	write_log(t_test *test, const char *res)
{
	(void)test;
	(void)res;
	return (0);
}

void	check_clear_log(t_test *test)
{
	(void)test;
	return ;
}

#endif
