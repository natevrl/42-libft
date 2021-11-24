#include "libft.h"
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (n == 0)
		return (dst);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (n == 0)
		return (dst);
	while (n)
	{
		((char*)dst)[n - 1] = ((const char*)src)[n - 1];
		n--;
	}
	return (dst);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ELEMENT_COUNT 10

int main()
{
	char str[100] = "jour";
	char dest[100] = "bonjour";
	char str3[100] = "jour";
	char dest3[100] = "bonjour";
	printf("ft_memcpy : %s\n", ft_memcpy(dest, str, 10));
	char str2[100] = "jour";
	char dest2[100] = "bonjour";
	printf("memcpy : %s\n", memcpy(dest, str, 10));

    return EXIT_SUCCESS;
}

