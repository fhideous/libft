#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	if(!lst)
		return(-1);
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}