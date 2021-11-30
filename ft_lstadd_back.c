#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	if (alst && new)
		ft_lstlast(*alst)->next = new; 
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

	elem1.content = 1;
	elem5.content = 50;

	printf("%d\n", ft_lstlast(begin)->content);
	ft_lstadd_back(&begin, &new);
	printf("%d\n", ft_lstlast(begin)->content);
	return (0);
}*/


