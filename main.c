int main()
{
	char str[] = "148";
	printf("%d\n", ft_atoi(str));
	return 0;
}
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

#include <assert.h>

#define INT_NUMBER 10

int main() {

    int i;
    int * pointer = (int *) calloc( INT_NUMBER, sizeof(int) );

    /* Un petit test sur le bon fonctionnement de calloc */
    assert( pointer != NULL );

    /* Le dernier élément du tableau ne sera pas affecté par la */
    /* boucle mais n'oubliez pas que calloc initialise de toute */
    /* façon à 0 chaque octet. */
    for ( i=0; i<INT_NUMBER-1; i++ ) {
        pointer[i] = i;
    }

    /* On affiche le contenu du tableau d'entier */
    /* Ce qui donne : 0 1 2 3 4 5 6 7 8 0 */
    for (i=0; i<INT_NUMBER; i++ ) {
        printf( "%d ", pointer[i] );
    }
    printf( "\n" );

    /* On libère le bloc de mémoire alloué dynamiquement */
    free( pointer );

    return 0;
}

int main()
{
	char x = 'E';
	printf("%c\n", tolower(x));
}
int main()
{
	char s[] = "123456";
	printf("%s\n", ft_substr(s, 6, 8));

}

int main()
{
	char tt[] = "testteeee";
	printf("%s\n", ft_strtrim(tt, "112t4"));
	printf("%d\n", isincharset('4', "123"));
}

int main()
{
	char str[] = "tet111s";
	char str2[] = "tet111s";
	int f = 'e';
	int f2 = 'e';
	printf("%s\n", ft_strrchr(str, f));
	printf("%s\n", strrchr(str2, f2));
	return (0);
}


int main()
{
	char big[] = "jesuistestbgggg";
	char big2[] = "jesuistestbgggg";
	char little[] = "test";
	char little2[] = "test";
	printf("%s\n", strnstr(big, little, 3));
	printf("%s\n", ft_strnstr(big, little, 10));
	return (0);
}

int	main(void)
{
	char s1[] = "";
	char s2[] = "";
	char s3[] = "Same";
	char s4[] = "Size";
	char s5[] = "Shorter";
	char s6[] = "ThanMyself";
	char s7[] = "ShorterTest";

	printf("%d, %d\n", ft_strncmp(s1, s2, 4), strncmp(s1, s2, 4));
	printf("%d, %d\n", ft_strncmp(s1, s2, 2), strncmp(s1, s2, 2));
	printf("%d, %d\n", ft_strncmp(s3, s4, 4), strncmp(s3, s4, 4));
	printf("%d, %d\n", ft_strncmp(s3, s4, 1), strncmp(s3, s4, 1));
	printf("%d, %d\n", ft_strncmp(s5, s6, 3), strncmp(s5, s6, 3));
	printf("%d, %d\n", ft_strncmp(s5, s5, 10), strncmp(s5, s5, 10));
	printf("%d, %d\n", ft_strncmp(s5, s5, 5), strncmp(s5, s5, 5));
	printf("%d, %d\n", ft_strncmp(s5, s7, 7), strncmp(s5, s7, 7));
	printf("%d, %d\n", ft_strncmp(s5, s7, 9), strncmp(s5, s7, 9));
	printf("%d\n", sizeof(int));
}

int main()
{
	char str[] = "aaaa";
	printf("%s\n", str);
	printf("%s\n", ft_strmapi(str, &test));
	return (0);
}
int	main()
{
	char src1a[] = "abcde";
	char dest1a[] = "1234567";
	char src1b[] = "abcde";
	char dest1b[] = "1234567";
	char src2a[] = "abcd";
	char dest2a[] = "123";
	char src2b[] = "abcd";
	char dest2b[] = "123";
	char src3a[] = "";
	char dest3a[] = "";
	char src3b[] = "";
	char dest3b[] = "";
	char src4a[] = "12345";
	char dest4a[] = "abc";
	char src4b[] = "12345";
	char dest4b[] = "abc";

	printf("%s\n%s\n%s\n%s\n%s\n%s\n%s\n%s\n",
			ft_strlcpy(dest1a, src1a, 0) == strlcpy(dest1b, src1b, 0) ? "Pass" : "Fail",
			strcmp(dest1a, dest1b) == 0 && strcmp(src1a, src1b) == 0 ? "Pass" : "Fail",
			ft_strlcpy(dest2a, src2a, 3) == strlcpy(dest2b, src2b, 3) ? "Pass" : "Fail",
			strcmp(dest2a, dest2b) == 0 && strcmp(src2a, src2b) == 0 ? "Pass" : "Fail",
			ft_strlcpy(dest3a, src3a, 0) == strlcpy(dest3b, src3b, 0) ? "Pass" : "Fail",
			strcmp(dest3a, dest3b) == 0 && strcmp(src3a, src3b) == 0 ? "Pass" : "Fail",
			ft_strlcpy(dest4a, src4a, 2) == strlcpy(dest4b, src4b, 2) ? "Pass" : "Fail",
			strcmp(dest4a, dest4b) == 0 && strcmp(src4a, src4b) == 0 ? "Pass" : "Fail");
	return (0);
}

int	main(void)
{
	char s1a[10] = "Test1";
	char s2a[] = "OK";
	char s1b[10] = "Test1";
	char s2b[] = "OK";
	char s3a[10] = "Same";
	char s4a[] = "Size";
	char s3b[10] = "Same";
	char s4b[] = "Size";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	char s5b[20] = "Shorter";
	char s6b[] = "ThanMyself";
	char s7a[20] = "Shorter";
	char s8a[] = "ThanMyself";
	char s7b[20] = "Shorter";
	char s8b[] = "ThanMyself";

	printf("%s\n", ft_strlcat(s1a, s2a, 6) == strlcat(s1b, s2b, 6) ? "Success" : "Fail");
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s3a, s4a, 10) == strlcat(s3b, s4b, 10) ? "Success" : "Fail");
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s5a, s6a, 4) == strlcat(s5b, s6b, 4) ? "Success" : "Fail");
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s7a, s8a, 0) == strlcat(s7b, s8b, 0) ? "Success" : "Fail");
	printf("%s\n", strcmp(s7a, s7b) == 0 && strcmp(s8a, s8b) == 0 ? "Success" : "Fail");

	/*
	printf("\n\nDetails:\n");
	printf("%s:%s\n%s:%s\n", s1a, s1b, s2a, s2b);
	printf("%s:%s\n%s:%s\n", s3a, s3b, s4a, s4b);
	printf("%s:%s\n%s:%s\n", s5a, s5b, s6a, s6b);
	printf("%s:%s\n%s:%s\n", s7a, s7b, s8a, s8b);
	*/
}
int	main()
{
	char str1[] = "teste"; 
	char str2[] = "123";
	printf("%s\n", ft_strjoin(str1, str2));
}

int main()
{
	char src[] = "12345";
	printf("%s\n", ft_strdup(src));
}
int main()
{
	char *strs[2] = {"bbbbb", "z"};

	printf("%d\n", ft_strcmp(strs[0], strs[1]));
	printf("%d\n", ft_cmp(strs[0], strs[1]));
}

int main()
{
	char str[] = "tet111s";
	char str2[] = "tet111s";
	int f = 's';
	int f2 = 's';
	printf("%s\n", ft_strchr(str, f));
	printf("%s\n", strchr(str2, f2));
	return (0);
}

int main()
{
	char str[] = "awdawd1awdawdawdawwwww";

	int i = 0;
	char **res = ft_split(str, 'a');

	printf("%s\n", str);
	while (res[i])
	{
		printf("tab[%d]; %s\n", i, res[i]);
		i++;
	}
}
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

int main()
{
	char str[100] = "abcde";
	char dest[100] = "000";
	printf("ft_memcpy : %s\n", ft_memcpy(dest, str, 4));
	char str2[100] = "abcde";
	char dest2[100] = "000";
	printf("memcpy : %s\n", memcpy(dest2, str2, 4));
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
int main()
{
	int i = 1234;
	printf("%s\n", ft_itoa(i));
}
#include <assert.h>

#define INT_NUMBER 10

int main() {
    
    int i;
    int * pointer = (int *) calloc( INT_NUMBER, sizeof(int) );

    /* Un petit test sur le bon fonctionnement de calloc */
    assert( pointer != NULL );

    /* Le dernier élément du tableau ne sera pas affecté par la */
    /* boucle mais n'oubliez pas que calloc initialise de toute */
    /* façon à 0 chaque octet. */
    for ( i=0; i<INT_NUMBER-1; i++ ) {
        pointer[i] = i;
    }

    /* On affiche le contenu du tableau d'entier */
    /* Ce qui donne : 0 1 2 3 4 5 6 7 8 0 */
    for (i=0; i<INT_NUMBER; i++ ) {
        printf( "%d ", pointer[i] );
    }
    printf( "\n" );

    /* On libère le bloc de mémoire alloué dynamiquement */
    free( pointer );

    return 0;
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
int main()
{
	char str[] = "148";
	printf("%d\n", ft_atoi(str));
	return 0;
}

