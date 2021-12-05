/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:34:19 by nbenhado          #+#    #+#             */
/*   Updated: 2021/12/05 18:28:00 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	y;

	if (little == NULL || ft_strlen(little) == 0)
		return ((char *)big);
	i = 0;
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			y = 0;
			while (big[i] == little[y] && i < len)
			{
				if (little[y + 1] == '\0')
					return ((char *)&big[i - y]);
				y++;
				i++;
			}
			i--;
		}
		i++;
	}
	return (NULL);
}
