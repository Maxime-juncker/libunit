/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:56:18 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 11:22:46 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# include <libunit.h>
# include <libft.h>

int	tests_launch(int *total);

int	ok_test(void);
int	ko_test(void);
int	segfault_test(void);
int	bus_err_test(void);

int	cause_bus_error(void);

#endif