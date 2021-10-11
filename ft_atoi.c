#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	negatif;
	int	result;

	i = 0;
	result = 0;
	negatif = 1;
	while ((nptr[i] >= 9 && nptr[i] <= 13) | (nptr[i] == ' '))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			negatif = -1;
		i++;
	}
	i -= 1;
	while (nptr[++i] >= '0' && nptr[i] <= '9')
		result = result * 10 + nptr[i] - '0';
	return (result * negatif);
}

#include <stdio.h>
int main()
{
	char str[] = "148";
	printf("%d\n", ft_atoi(str));
	return 0;
}
