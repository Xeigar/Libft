#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
		int	size;

		if (!s[0])
				return (NULL);
		size = ft_strlen(s);
		while (size >= 0)
		{
				if (s[size] == (char)c)
						return ((char *)(s + size));
				size--;
		}
		return (NULL);
}

