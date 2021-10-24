#include <stdlib.h>
#include "libft.h"

size_t ft_strlen(char const *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

char *ft_strjoin(char const *s1, char const *s2)
{
	int y;
	int i;
	int total_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	char *join;
	
	join = malloc(sizeof(char const) * total_size);
	if (join == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y])
	{
		join[i] = s2[y];
		i++;
		y++;
	}
	join[i] = '\0';
	return (join);
}


#include <stdio.h>
int	main()
{
	char str1[] = "teste"; 
	char str2[] = "123";
	printf("%s\n", ft_strjoin(str1, str2));
}
