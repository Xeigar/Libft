int	ft_atoi(const char *s)
{
		int	i;
		int	neg;

		i = 0;
		neg = 1;
		while (*s == 32 || (*s >=9 && *s <= 13))
				s++;
		if (*s == '-' || *s == '+')
		{
				if (*s == '-')
						neg*= (-1);
				s++;
		}
		while (*s >= '0' && *s <= '9')
		{
				i = i * 10 + (*s - 48);
				s++;
		}
		return (i * neg);
}

