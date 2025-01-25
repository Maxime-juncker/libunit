#include <libunit.h>

void	cleanup(t_list *lst)
{
	ft_lstclear(lst, &free);
}