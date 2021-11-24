#include "libft.h"


void * ft_memchr( const void * memoryBlock, int searchedChar, size_t size )
{
	int i;
	char *tmp;

	tmp = (char *)memoryBlock;

	i = 0;
	while (i < size && tmp[i])
	{
		if ( tmp[i] == searchedChar )
			return (&tmp[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char data[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
    const unsigned int size = 15;

    // On recherche une valeur inhéxistante :
    void * found = memchr( data, 57, size );
    printf( "57 is %s\n", ( found != NULL ? "found" : "not found" ) );

    // On recherche une valeur existante :
    found = memchr( data, 53, size );
    printf( "50 is %s\n", ( found != NULL ? "found" : "not found" ) );
    if ( found != NULL ) {
        printf( "La valeur à la position calculée est %d\n", *((char *) found) );
    }

    return EXIT_SUCCESS;
}
