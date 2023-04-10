int	ft_tolower(int	c)
{
		int	i;

		i = 0;
		if (c >= 'A' && c <= 'Z')
		{
				i = c + ('a' - 'A');
				return (i);
		}
		return (c);
}

