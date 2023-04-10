#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
		size_t	i;
		char	*t_dest;
		char	*t_src;

		if (!dest && !src)
				return (NULL);
		t_dest = (char *)dest;
		t_src = (char *)src;
		i = 0;
		if (t_dest > t_src)
		{
				while (i < n)
				{
						t_dest[n - i - 1] = t_src[n - i - 1];
						i++;
				}
		}
		else
		{
				while (i <= n)
				{
						t_dest[i] = t_src[i];
						i++;
				}
		}
		return (t_dest);
}
