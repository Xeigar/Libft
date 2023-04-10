#include "libft.h"

char	*ft_strdup(const char *s)
{
		char	*p;
		int		size;
		int		i;

		i = 0;
		size = ft_strlen(s);
		p = (char *)malloc(sizeof(*p) * (size + 1));
		if ( p == NULL)
				return (NULL);
		while (s[i])
		{
				p[i] = s[i];
				i++;
		}
		p[i] = '\0';
		return (p);
}

