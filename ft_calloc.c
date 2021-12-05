/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:15:38 by nbenhado          #+#    #+#             */
/*   Updated: 2021/12/05 22:21:59 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t elementCount, size_t elementSize )
{
	size_t	i;
	char	*block;

	i = 0;
	block = malloc(elementSize * elementCount);
	if (!block)
		return (NULL);
	if (elementCount < 1)
		return (NULL);
	block = ft_memset(block, 0, elementSize * elementCount);
	return (block);
}
