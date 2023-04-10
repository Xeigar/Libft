#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
		long	i;
		char	a;

		i = n;
		if (n < 0)
		{
				write(fd, "-", 1);
				i = -i;
		}
		if (i > 9)
		{
				ft_putnbr_fd(i / 10, fd);
				ft_putnbr_fd(i % 10, fd);
		}
		else
		{
				a = i + 48;
				write(fd, &a, 1);
		}
}

