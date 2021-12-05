#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;

	new->next = NULL;
	if (!lst)
		return (NULL);
	while(lst)
	{
		new = ft_lstnew(f(lst->content)); 
		if (!new)
			ft_lstclear(new);
		lst = lst->next;
	}

	return (new);

}
