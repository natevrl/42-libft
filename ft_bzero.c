#include "libft.h"

#include <strings.h>
#include <stdio.h>
/*void bzero(void *s, size_t n)
{
	
}*/

int main()
{
	char str[] = "teste";
	printf(str);
	bzero(&str, 2);
	printf(str);
	return (0);
}
