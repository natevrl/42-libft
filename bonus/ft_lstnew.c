#include "../libft.h"


/*Alloue (avec malloc(3)) et renvoie un nouvel
élément. la variable content est initialisée à
l’aide de la valeur du paramètre content. La
variable ’next’ est initialisée à NULL.*/

t_list *ft_lstnew(void *content)
{
	t_list *new_elem;

	new_elem = malloc(sizeof(t_list));
	if (!new_elem)
		return (NULL);
	new_elem->content = content;
	new_elem->next = NULL;
	return (new_elem);


}

int main()
{
	t_list *elem1;

	elem1 = ft_lstnew("test");
	printf("%s%p\n", elem1->content, elem1->next);

	return (0);
}
