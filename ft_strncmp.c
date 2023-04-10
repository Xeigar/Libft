#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
		size_t			i;

		i = 0;
		if (!*s1 || !*s2)
				return (*(unsigned char*)s1 - *(unsigned char*)s2);
		while ((s1[i] && s2[i]) && i < n)
		{
				if ((unsigned char)s1[i] != (unsigned char)s2[i])
						return ((unsigned char)s1[i] - (unsigned char)s2[i]);
				i++;
		}
		return (0);
}

/*int main()
{
		printf("%d\n", ft_strncmp("", "as", 4 * sizeof(char)));
		return 0;
}*/
