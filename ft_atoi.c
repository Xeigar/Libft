/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoutinh <tmoutinh@student.42porto.com     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 14:30:34 by tmoutinh          #+#    #+#             */
/*   Updated: 2023/04/11 19:19:52 by tmoutinh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *s)
{
	int	i;
	int	neg;

	i = 0;
	neg = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
			neg *= (-1);
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		i = i * 10 + (*s - 48);
		s++;
	}
	return (i * neg);
}

/*
#include <stdio.h>
int main (void)
{
	char	*str = "	 ---+-+-++2147483648a2b567";
	printf("%i\n", ft_atoi(str));
	return (0);
}
*/