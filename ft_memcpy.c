#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
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
	char str[] = "12345";
	char dest[] = "1111111111";
	printf("%s\n", ft_memcpy(dest, str, 0));
	printf("%s\n", memcpy(dest, str, 0));
}
