/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 16:34:50 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/25 19:29:09 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOI_TESTS_H
# define ATOI_TESTS_H

# include <libunit.h>
# include <libft.h>

# define IGNORE_0 0
# define IGNORE_1 0
# define IGNORE_2 0
# define IGNORE_3 0
# define IGNORE_4 0
# define IGNORE_5 0

// launcher.c
int		atoi_launch(int *total);

// tests:
int		null_test(void);
int		basic_test_atoi(void);
int		basic_overflow(void);
int		basic_underflow(void);
int		long_overflow(void);
int		long_underflow(void);

#endif
