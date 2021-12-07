/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:30:53 by nbenhado          #+#    #+#             */
/*   Updated: 2021/12/07 18:31:34 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	
	if (!lst)
		return (NULL);
	new = NULL;
	while(lst->next)
	{
		new = ft_lstnew(f(lst->content)); 
		if (!new)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		new = new->next;
		lst = lst->next;
	}
	new = 0;
	return (new);

}
