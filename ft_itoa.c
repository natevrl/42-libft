/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:16:52 by nbenhado          #+#    #+#             */
/*   Updated: 2021/12/05 18:50:47 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenumb(int nbr)
{
	int	i;

	i = 0;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == 0)
		return ("0");
	if (n == -2147483648)
		return "-2147483648";
	len = lenumb(n);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		len += 1;
		str = malloc(sizeof(char) * len + 1);
		n = -n;
		str[0] = '-';
	}
	str[len] = '\0';
	while (n)
	{
		str[len-- - 1] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}


int main()
{
	printf("%s\n", ft_itoa(-2147483648));
}

