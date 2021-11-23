#include "libft.h"
#include <string.h>
#include <stddef.h>

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
	    i++;
	return (i);
}


char *ft_strrchr(const char *string, int searchedChar)
{
	int max;

	max = ft_strlen(string) - 1;
	while (string[max])
	{
		if (string[max] == searchedChar)
			return ((char *)&string[max]);
		max--;
	}
	return (NULL);
}
#include <stdio.h>
int main()
{
	char str[] = "tet111s";
	char str2[] = "tet111s";
	int f = 'e';
	int f2 = 'e';
	printf("%s\n", ft_strrchr(str, f));
	printf("%s\n", strrchr(str2, f2));
	return (0);
}

