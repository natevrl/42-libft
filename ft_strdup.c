#include "libft.h"
#include <stdlib.h>

char *strdup(const char *src)

{
	int i;
	int max;
	char *dest;

	i = 0;
	max = 0;
	while (src[max])
		max++;
	dest = (char *)malloc(sizeof(char) * max);
	if (!dest)
		return (NULL);
	while (i < max)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest) ;
}


#include <stdio.h>
int main()
{
	char src[] = "12345";
	printf("%s\n", ft_strdup(src));
}

