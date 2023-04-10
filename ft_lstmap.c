#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
		t_list	*nl;
		t_list	*current;

		if (!lst || !f || !del)
				return (NULL);
		nl = NULL;
		current = lst;
		while (current)
		{
				nl = ft_lstnew(f(current->content));
				if (!nl)
				{		
						ft_lstclear(&lst, del);
						ft_lstclear(&nl, del);
						return (NULL);
				}
				ft_lstadd_back(&nl, nl);
				current = current->next;
		}
		return (nl);
}
 
