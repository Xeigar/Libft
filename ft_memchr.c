#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
		size_t	i;
		unsigned char	d;
		unsigned char	*sv;

		d = (unsigned char)c;
		sv = (unsigned char *)s;
		i = 0;
        while (i < n)
        {
                if (*(sv) == d)
                        return ((void *)sv);
				sv++;
				i++;
        }
        return (NULL);
}

/*int main()
{
		char	src[] = "iawhf\200wf208awfh\xakufi21f4\x42w7fwa1f";
		//char			*src = "/|\x12\xff\x09\x42\2002\043|\\";
		int				size = 10;

		if ((char *)memchr(src, '\x42', sizeof(src)) == (char *)ft_memchr(src, '\x42', sizeof(src)))
				printf("TEST_SUCCESS\n");
		printf("real: %s\n", (char *)memchr(src, 'f', size));
		printf("test: %s\n", (char *)ft_memchr(src, 'f', size));
		printf("test de unsigned char %c\n", '\200');
		return 0;
}*/
