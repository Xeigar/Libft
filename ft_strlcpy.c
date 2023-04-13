/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoutinh <tmoutinh@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:54:47 by tmoutinh          #+#    #+#             */
/*   Updated: 2023/04/11 14:55:01 by tmoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*int main (void)
{
	char *src="bleh bleh";
	char dest[10];
	ft_strlcpy(dest, src, 5);
	printf("%s \n", dest);
	printf("%i \n", ft_strlcpy(dest, src, 8));
	return 0;
}*/