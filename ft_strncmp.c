#include "libft.h"
#include <string.h>

/*int ft_strncmp(const char *s1, const char *s2, size_t n)

{
	size_t i;

	i = 0;
	if (n < 1)
		return (0);
	else if (n == 1)
		return (*s1 - *s2);
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	while ( (s1[i] != '\0' || s2[i] != '\0') && s1[i] == s2[i] && n != i)
		i++;
	return (s1[i] - s2[i]);
}*/
int ft_strncmp(const char *s1, const char *s2, size_t n)

{
	size_t	i;

	i = 1;
	if (n == 0)
		return (0);
	else if (n == 1)
		return (*s1 - *s2);
	if (*s1 == '\0' && *s2 == '\0')
		return (0);
	while (i <= n || *s1)
	{
		if (*s1 == *s2)
		{
			if (i == n)
				break ;
			s1++;
			s2++;
			i++;
		}
		else
			break ;
	}
	return (*s1 - *s2);
}

#include <stdio.h>

int	main(void)
{
	char s1[] = "eeee";
	char s2[] = "eee";
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
}
