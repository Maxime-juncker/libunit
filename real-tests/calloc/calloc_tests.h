/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calloc_tests.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:00:35 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/25 18:40:48 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CALLOC_TESTS_H
# define CALLOC_TESTS_H

# include <libunit.h>
# include <libft.h>

# define IGNORE_0 0
# define IGNORE_1 0
# define IGNORE_2 0
# define IGNORE_3 0

int	calloc_launch(int *total);

int	basic_test_calloc(void);
int	bigger_test(void);
int	calloc_zero(void);

#endif
