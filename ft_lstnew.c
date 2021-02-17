#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void *cont)
{
	t_list *s;
	int len;

	if(!(s = malloc(sizeof(t_list))))
		return(NULL);
	if (!cont)
	{
		s->data = NULL;
		s->next = NULL;
		return (s);
	}
	len = ft_strlen(cont);
	if (!(s->data = ft_calloc(len + 1, sizeof(*cont))))
		return(NULL);
	ft_memcpy(s->data, cont, len);
	s->next = NULL;
	return(s);
}