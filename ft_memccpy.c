#include "libft.h"

void *memccpy(void *restrict dest, const void *restrict src, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && src[i] != c)
	{
		i++;
	}
}


#include <stdio.h>
#include <string.h>
/*int main()
{
	char str[] = "12345";
	char dst[] = "abcdefghijkl";
	printf("%s\n", memccpy(dst, str, '4', 4));
	return (0);
}*/

int		main(void)
{
	char	src[100] = "test1 t4est2 testC";
	char	dst[100] = "aaaaaaaaaa";
	char	src_ft[100] = "test1 t4est2 testC";
	char	dst_ft[100] = "aaaaaaaaaa";;

	printf("ft_memccpy : %s\nmemccpy : %s\n",
			(char *)ft_memccpy(dst_ft, src_ft, '4', 17),
			(char *)memccpy(dst, src, '4', 17));
	printf("dst : %s\nsrc :%s\ndst_ft : %s\nsrc_ft : %s", dst, src,
			dst_ft, src_ft);
	return (0);
}


