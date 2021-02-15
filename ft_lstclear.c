#include "libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *old;

	if (!del)
		return;
	while (*lst) {
		del((*lst)->data);
		old = *lst;
		*lst = (*lst)->next;
		free(old);
	}
	*lst = NULL;
}