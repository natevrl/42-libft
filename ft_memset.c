#include "libft.h"
#include <string.h>
#include <stdio.h>

void *ft_memset( void *pointer, int value, size_t count )
{
	int i;

	i = 0;
	while (i < count)
	{
		((unsigned char *)pointer)[i] = (unsigned char)value;
		i++;
	}
	return (pointer);
}

#include <string.h>

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    char str2[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore: %s\n", str);

    // Fill 8 characters starting from str[13] with '.'
    memset(str2 + 13, '.', 8*sizeof(char));
    ft_memset(str + 13, '.', 8*sizeof(char));

    printf("After memset():  %s\n", str2);
    printf("After ft_memset():  %s", str);
    return 0;
}
