#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *tmp;

	tmp = *lst;
	while(tmp->next != NULL)
	{
		del(tmp->content);
		free(tmp);
		tmp = tmp->next;
	}
}
