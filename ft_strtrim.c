#include "libft.h"

static int	in(char const s, char const *set) //if 0 then is present in set;
{
		int	i;

		i = 0;
		while (set[i])
		{
				if (set[i] == s)
						return (0);
				i++;
		}
		return (1);
}

static void	fill(char *p, int start, int end, char const *s1)
{
		int	i;

		i = 0;
		if (end != 0)
		{		
				while (start <= end)
				{
						p[i] = s1[start];
						start++;
						i++;
				}
		}	
		p[i] = '\0';
}

char	*ft_strtrim(char const *s1, char const *set)
{
		int		start;
		int		end;
		char	*p;

		if (!s1)
				return (0);
		end = ft_strlen(s1) - 1;
		start = 0;
		while (end != start && in(s1[end], set) == 0)
				end--; 
		while (start != end && in(s1[start], set) == 0)
				start++;
		p = (char*)malloc(sizeof(*p) * (end - start + 2));
		if (p ==  NULL)
				return (NULL);
		fill(p, start, end, s1);
		return (p);
}


/*int main()
{
		printf("%s\n", ft_strtrim("\t   \n\n\n  \n\n\t    Hello \t  Please\n Trim me !\t\t\t\n  \t\t\t\t  ", " \t\n"));
		return 0;
}*/
