/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_tests.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:00:35 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 10:40:56 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRDUP_TESTS_H
# define STRDUP_TESTS_H

# include <libunit.h>
# include <libft.h>

int	strdup_launch(int *total);

int	basic_strdup(void);
int	bigger_dup(void);
int	null_dup(void);

#endif
