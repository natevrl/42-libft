#include "libft.h"
#include <string.h>
#include <stdlib.h>

size_t ft_strlen(char const *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *new_str;
	
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
	{
		new_str = malloc(sizeof(char) * 1);
		new_str[0] = '\0';
		return (new_str);
	}
	new_str = malloc(sizeof(char) * len + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (len != 0)
	{
		new_str[i] = s[start - 1];
		i++;
		start++;
		len--;
	}
	new_str[i] = '\0';
	return (new_str);
}

#include <stdio.h>
int main()
{
	char s[] = "123456";
	printf("%s\n", ft_substr(s, 6, 8));

}
