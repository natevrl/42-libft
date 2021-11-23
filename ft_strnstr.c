#include "libft.h"
#include <bsd/string.h>


char *ft_strnstr(const char *big, const char *little, int len)
{
	int i;
	int y;
	
	i = 0;
	while(big[i] && i != len)
	{
		if (big[i] == little[0])
		{
			y = 0;
			while (big[i] == little[y] && i != len)
			{
				if (little[y + 1] == '\0')
					return ((char *)&big[i - y]);
				y++;
				i++;
			}
		}
		i++;
	}
}

#include <stdio.h>
int main()
{
	char big[] = "jesuistestbgggg";
	char big2[] = "jesuistestbgggg";
	char little[] = "test";
	char little2[] = "test";
	printf("%s\n", strnstr(big, little, 10));
	printf("%s\n", ft_strnstr(big, little, 10));
	return (0);
}
