#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char test(unsigned int index, char c)
{
	return c += 10;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *new_str;

	new_str = malloc(sizeof(char) * ft_strlen(s));
	if (!new_str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		new_str[i] = (*f)(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

int main()
{
	char str[] = "aaaa";
	printf("%s\n", str);
	printf("%s\n", ft_strmapi(str, &test));
	return (0);
}
