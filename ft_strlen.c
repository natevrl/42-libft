#include "libft.h"
#include <stddef.h>

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
	    i++;
	return (i);
}
#include <stdio.h>
int main()
{
	const char s[] = "teste";
	printf("%d", ft_strlen(s));
}
