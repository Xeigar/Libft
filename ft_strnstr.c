/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoutinh <tmoutinh@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:56:40 by tmoutinh          #+#    #+#             */
/*   Updated: 2023/04/11 19:14:50 by tmoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *) haystack);
	j = 0;
	while (haystack[j] && j < n)
	{
		i = 0;
		while (haystack[j + i] == needle[i]
			&& j + i < n && needle[i])
			i++;
		if (needle [i] == '\0')
			return ((char *)(haystack + j));
		j++;
	}
	return (NULL);
}

/*int main()
{
		char *haystack = "MZIRIBMZIRIBMZE123";
		char *needle = "MZIRIBMZE";
		size_t n = 9;
		printf("%p\n", NULL);
		printf("%s\n", ft_strnstr(haystack, needle, n));
		return 0;
}*/
