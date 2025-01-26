/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_sigfpe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 11:40:09 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 11:49:14 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libunit.h>
#include "tests.h"

int	sigfpe_test(void)
{
	if (cause_sigfpe() == 1)
		return (0);
	else
		return (-1);
}
