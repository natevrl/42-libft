#include "libft.h"
#include <string.h>


char *ft_strchr(const char *string, int searchedChar)
{
	int i;

	i = 0;
	while (string[i])
	{
		if (string[i] == searchedChar)
			return ((char *)&string[i]);
		i++;
	}
	return (NULL);
}
#include <stdio.h>
int main()
{
	char str[] = "tet111s";
	char str2[] = "tet111s";
	int f = 's';
	int f2 = 's';
	printf("%s\n", ft_strchr(str, f));
	printf("%s\n", strchr(str2, f2));
	return (0);
}
