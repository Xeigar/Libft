#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
		int		size;
		char	*tab;
		int unsigned	i;
		
		if (!s || !f)
				return (NULL);
		size = ft_strlen(s);
		tab = (char*)malloc(sizeof(*tab) * (size + 1));
		if (!tab)
				return (NULL);
		i = 0;
		while (s[i])
		{
				tab[i] = f(i, s[i]);
				i++;
		}
		tab[i] = '\0';
		return (tab);
}

