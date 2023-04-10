#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
		size_t	i;
		size_t	size;

		i = 0;
		size = ft_strlen(src);
		if (n == 0)
				return (size);
		while (src[i] && i < n - 1)
		{
				dest[i] = src[i];
				i++;
		}
		dest[i] = '\0';
		return (size);
}

