#include "../git/headers/libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	if (!fd)
		return ;
	ft_putstr_fd(s, fd);
	write(fd, &"\n", 1);
}
