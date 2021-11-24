#include "libft.h"
#include <unistd.h>

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, '-', 1);
		return ;
		n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n %= 10);
	}
	else
	{
		write(fd, n + 48 , 1);
	}
}
