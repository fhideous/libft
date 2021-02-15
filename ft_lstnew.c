#include "libft.h"
#include <stdlib.h>

t_list		*ft_lstnew(void *cont, size_t cont_size)
{
	t_list *s;

	if(!(s = malloc(sizeof(t_list))))
		return(NULL);
	if (!cont || !cont_size)
	{
		s->data = NULL;
		s->cont_size = 0;
		s->next = NULL;
		return (s);
	}
	if (!(s->data = malloc(cont_size)))
		return(NULL);
	ft_memcpy(s->data, cont, cont_size);
	s->cont_size =cont_size;
	s->next = NULL;
	return(s);
}