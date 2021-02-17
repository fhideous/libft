#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	char	*s;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	s = (char *)ptr;
	while (count--)
		*s++ = '\0';
	return (ptr);
}
