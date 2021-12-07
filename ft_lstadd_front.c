/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 13:30:12 by nbenhado          #+#    #+#             */
/*   Updated: 2021/12/07 13:30:14 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}

/*int main()
{
	t_list elem1;
	t_list elem2;
	t_list elem3;
	t_list elem4;
	t_list elem5;
	t_list *begin;

	t_list new;

	new.content = 777;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = &elem4;
	elem4.next = &elem5;
	elem5.next = 0;

	elem1.content = 20;
	elem2.content = 30;

	printf("%d\n", ft_lstsize(begin));
	printf("%d\n", begin->content);
	ft_lstadd_front(&begin, &new);
	printf("%d\n", begin->content);
	printf("%d\n", ft_lstsize(begin));
	return (0);
}*/

