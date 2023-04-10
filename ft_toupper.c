int	ft_toupper(int c)
{
        int     i;

        i = 0;
        if (c >= 'a' && c <= 'z')
        {
				i = c - ('a' - 'A');
                return (i);
        }
        return (c);
}
