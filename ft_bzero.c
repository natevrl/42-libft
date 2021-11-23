#include "libft.h"
#include <strings.h>
#include <stdio.h>

void ft_bzero(void *s, size_t n)
{
	while (n)
	{
		((char *)s)[n - 1] = 0;
		n--;
	}
}

int main()
{
	char str[] = "teste";
	char str2[] = "teste";
	printf("%s\n", str);
	printf("%s\n", str2);
	ft_bzero(str, 4);
	bzero(str2, 4);
	printf("ft_bzero : %s\n", str);
	printf("bzero : %s\n", str2);
	return (0);
}
