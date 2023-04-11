/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoutinh <tmoutinh@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:58:34 by tmoutinh          #+#    #+#             */
/*   Updated: 2023/04/11 19:40:01 by tmoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	p = (char *)malloc(len + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while ((start + i) < size && i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*int main()
{
		char	*str = "012345";
		size_t	size = 10;

		char	*ret = ft_substr(str, 10, size);
		printf("%s\n", ret);
		return 0;
}*/
