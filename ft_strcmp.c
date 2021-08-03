#include "libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

static int	ft_cmp(char	*s1, char	*s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			break ;
	}
	return (*s1 - *s2);
}

#include <stdio.h>

int main()
{
	char *strs[2] = {"bbbbb", "z"};

	printf("%d\n", ft_strcmp(strs[0], strs[1]));
	printf("%d\n", ft_cmp(strs[0], strs[1]));
}
