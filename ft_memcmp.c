#include "libft.h"

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_memcmp( const void * pointer1, const void * pointer2, size_t size )
{
	size_t i;
	unsigned char *ptr1;
	unsigned char *ptr2;


	ptr1 = (unsigned char *)pointer1;
	ptr2 = (unsigned char *)pointer2;
	i = 0;
	while (i < size)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
    return (0);
}

int main() 
{

    int array1 [] = { 54, 85, 3, 63, 21 };
    int array2 [] = { 54, 85, 19, 63, 21 };
    size_t size = sizeof( int ) * 5;

    assert( memcmp( array1, array2, size) == ft_memcmp( array1, array2, size) );
    assert( memcmp( array1, array1, size) == ft_memcmp( array1, array1, size) );
    assert( memcmp( array2, array1, size) == ft_memcmp( array2, array1, size) );

    printf( "Test is ok\n" );
    printf( "%d\n", memcmp(array1, array2, size) );
    printf( "%d\n", ft_memcmp(array1, array2, size) );

    return 0;
}
