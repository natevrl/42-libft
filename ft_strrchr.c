/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:34:26 by nbenhado          #+#    #+#             */
/*   Updated: 2021/11/26 17:57:47 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	int	max;

	max = ft_strlen(string) - 1;
	while (string[max])
	{
		if (string[max] == searchedChar)
			return ((char *)&string[max]);
		max--;
	}
	return (NULL);
}
