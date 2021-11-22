#include "libft.h"
#include <stdlib.h>

#include <stddef.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
	    i++;
	return (i);
}


int isincharset(char comp, const char *str)
{
	int i;

	i = -1;
	while (str[++i])
		if (str[i] == comp)
			return (1);
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *trim;
	int i;
	int y;
	int end_of_s1;

	end_of_s1 = ft_strlen(s1);
	printf("%d\n", end_of_s1);
	trim = malloc(sizeof(const char) * end_of_s1);
	i = 0;
	if (isincharset(s1[0], set))
	{
		while (isincharset(s1[i], set))
			i++;
	}	

	if (isincharset(s1[end_of_s1 - 1], set))
	{
		while (isincharset(s1[end_of_s1 - 1], set))
			end_of_s1--;
	}
	y = 0;
	while (i != end_of_s1)
	{
		trim[y] = s1[i];
		i++;
		y++;
	}
	return (trim);
}

int main()
{
	char tt[] = "testteeee";
	printf("%s\n", ft_strtrim(tt, "112t4"));
	printf("%d\n", isincharset('4', "123"));
}
