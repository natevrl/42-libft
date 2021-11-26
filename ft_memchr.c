/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:18:00 by nbenhado          #+#    #+#             */
/*   Updated: 2021/11/26 17:33:44 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr( const void *memoryBlock, int searchedChar, size_t size )
{
	int		i;
	char	*tmp;

	tmp = (char *)memoryBlock;
	i = 0;
	while (i < size && tmp[i])
	{
		if (tmp[i] == searchedChar)
			return (&tmp[i]);
		i++;
	}
	return (NULL);
}
