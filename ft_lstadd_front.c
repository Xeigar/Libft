#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
		if (!*lst)
		{
				*lst = new;
				return;
		}
		if (!lst || !new)
				return;
		else
		{
				new->next = *lst;
				*lst = new;
		}
}