#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;

	new = NULL;
	if (!lst)
		return (NULL);
	while(lst)
	{
		new = ft_lstnew(f(lst->content)); 
		if (!new)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&lst, new);

		lst = lst->next;
	}

	return (new);

}
