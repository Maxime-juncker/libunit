/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logging.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjuncker <mjuncker@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 12:38:05 by mjuncker          #+#    #+#             */
/*   Updated: 2025/01/26 14:24:15 by mjuncker         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libunit.h>
#include <fcntl.h>

#if BONUS

void	clear_log(t_test *test)
{
	int		fd;
	char	*tmp;
	char	*file_path;

	tmp = ft_strjoin("./", test->function_name);
	if (tmp == NULL)
		return ;
	file_path = ft_strjoin(tmp, ".log");
	free(tmp);
	if (file_path == NULL)
		return ;
	fd = open(file_path, O_CREAT | O_RDWR | O_TRUNC, 0777);
	free(file_path);
	close(fd);
}

int	open_log(t_test *test)
{
	int		fd;
	char	*tmp;
	char	*file_path;

	tmp = ft_strjoin("./", test->function_name);
	if (tmp == NULL)
		return (-1);
	file_path = ft_strjoin(tmp, ".log");
	free(tmp);
	if (file_path == NULL)
		return (-1);
	fd = open(file_path, O_CREAT | O_RDWR | O_APPEND, 0777);
	free(file_path);
	return (fd);
}

int	write_log(t_test *test, const char *res)
{
	int		fd;
	char	*msg;
	int		size;

	fd = open_log(test);
	if (fd == -1)
		return (-1);
	size = ft_strlen(test->test_name) + ft_strlen(res) + 3;
	msg = NULL;
	msg = ft_calloc(size, 1);
	if (msg == NULL)
		return (-1);
	ft_strlcat(msg, test->test_name, size);
	ft_strlcat(msg, ":", size);
	ft_strlcat(msg, res, size);
	ft_strlcat(msg, "\n", size);
	ft_putstr_fd(msg, fd);
	free(msg);
	close(fd);
	return (0);
}

void	check_clear_log(t_test *test)
{
	static int	name_value = 0;

	if (name_value != get_name_value(test->function_name))
	{
		clear_log(test);
		name_value = get_name_value(test->function_name);
	}
}
#endif
