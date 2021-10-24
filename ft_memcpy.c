#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (n == 0)
		return (dst);
	while (n != 0)
	{
		((char*)dst)[n - 1] = ((const char*)src)[n - 1];
		n--;
	}
	return (dst);
}

#include <stdio.h>
#include <string.h>
int main()
{
	char str[100] = "12345";
	char dest[100] = "0000000";
	printf("%s\n", ft_memcpy(dest, str, 4));
	char str2[100] = "abcde";
	char dest2[100] = "0000000";
	printf("%s\n", memcpy(dest2, str2, 2));
}
