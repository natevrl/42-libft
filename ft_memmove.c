#include "libft.h"
#include <string.h>

void *ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;

	if (!dst && !src)
		return (NULL);
	if (n == 0)
		return (dst);
	i = 0;
	if (dst > src)
	{
		while (n > 0)
		{

			n--;
			((char *)dst)[n] = ((char *)src)[n];
		}
	}
	else
		while (i < n)
		{
			((char *)dst)[n] = ((char *)src)[n];
			i++;
		}
	return (dst);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char src[100] = "jour";
	char dest[100] = "bonjour";
	char src2[100] = "jour";
	char dest2[100] = "bonjour";
	printf("ft_memmove : %s\n", ft_memmove(dest, src, 10));
	printf("memmove : %s\n", memmove(dest2, src2, 10));

    return EXIT_SUCCESS;
}

