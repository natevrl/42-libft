#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
	while (lst)
	{
		lst = lst->next;
		if (lst->next == NULL)
			return (lst);
	}
	return (0);
}
