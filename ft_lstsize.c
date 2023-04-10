#include "libft.h"

int	ft_lstsize(t_list *lst)
{
		t_list	*a;
		int		i;
		
		a = lst;
		i = 0;
		while (a)
		{
				i++;
				a = a->next;
		}
		return (i);
}
