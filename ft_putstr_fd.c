#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
		if (!s || !fd)
				return;
		while (*s)
		{
				write(fd, s, 1);
				s++;
		}
}
