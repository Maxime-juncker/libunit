/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   err_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:52:48 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 12:23:32 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <libunit.h>

int	cause_bus_error(void)
{
	int		*iptr;
	char	*cptr;

	__asm__("pushf\norl $0x40000,(%rsp)\npopf");
	cptr = malloc(sizeof(int) + 1);
	iptr = (int *)++cptr;
	*iptr = 42;
	return (0);
}

int	cause_abort(void)
{
	char	*ptr;

	ptr = malloc(128);
	free(ptr);
	free(ptr);
	return (1);
}

int	cause_sigfpe(void)
{
	volatile int	a;
	volatile int	b;
	int				c;

	a = 1;
	b = 0;
	c = a / b;
	return (1);
}

int	cause_sigpipe(void)
{
	int	fds[2];

	pipe(fds);
	close(fds[0]);
	write(fds[1], "x", 1);
	close(fds[1]);
	return (1);
}

int	cause_sigill(void)
{
	__asm__ volatile (".byte 0x0F, 0x0B");
	return (1);
}
