/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:18:00 by nbenhado          #+#    #+#             */
/*   Updated: 2021/12/05 16:57:08 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr( const void *memoryBlock, int searchedChar, size_t size )
{
	size_t	i;
	char	*tmp;

	tmp = (char *)memoryBlock;
	i = 0;
	if (size < 1)
		return (NULL);
	while (i < size)
	{
		if (tmp[i] == (unsigned char)searchedChar)
			return (&tmp[i]);
		i++;
	}
	return (NULL);
}
