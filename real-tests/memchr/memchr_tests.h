/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr_tests.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:50:43 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 10:39:35 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMCHR_TESTS_H
# define MEMCHR_TESTS_H

# include <libunit.h>
# include <libft.h>

int	memchr_launch(int *total);

int	basic_test_memchr(void);
int	not_found(void);
int	eof_test(void);
int	big_n_test(void);

#endif
