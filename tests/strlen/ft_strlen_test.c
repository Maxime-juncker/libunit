#include <stdlib.h>

size_t	ft_strlen_test(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}