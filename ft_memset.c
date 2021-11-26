/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:19:19 by nbenhado          #+#    #+#             */
/*   Updated: 2021/11/26 17:39:23 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset( void *pointer, int value, size_t count )
{
	int	i;

	i = 0;
	while (i < count)
	{
		((unsigned char *)pointer)[i] = (unsigned char)value;
		i++;
	}
	return (pointer);
}
