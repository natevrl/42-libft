#include <stdio.h>
#include <stdlib.h>


int lenumb(int nbr)
{
	int i = 0;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return i;
}

char *ft_itoa(int n)
{
	char *str;
	int len = lenumb(n);
	str = malloc(sizeof(char) * len + 1);
	if (n == -2147483648)
		return "-2147483648";
	if (n < 0)
	{
		len += 1;
		n *= -n;
		str[0] = '-';
	}
	str[len] = '\0';
	while (n)
	{
		str[len - 1] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (str) ;
}


int main()
{
	int i = 1234;
	printf("%s\n", ft_itoa(i));
}
