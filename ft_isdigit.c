#include "libft.h"

int		ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (c);
	return (0);
}
