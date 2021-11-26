/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:15:38 by nbenhado          #+#    #+#             */
/*   Updated: 2021/11/26 16:40:32 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc( size_t elementCount, size_t elementSize )
{
	int		i;
	char	*block;

	block = malloc(elementSize * elementCount);
	if (!block)
		return ("NULL");
	i = 0;
	while (i < elementCount)
	{
		block[i] = '\0';
		i++;
	}
	return (block);
}
