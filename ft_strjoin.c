/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:25:12 by nbenhado          #+#    #+#             */
/*   Updated: 2021/12/07 13:32:03 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		y;
	int		i;
	int		total_size;
	char	*join;

	total_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	join = malloc(sizeof(char const) * total_size);
	if (join == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	y = 0;
	while (s2[y])
	{
		join[i] = s2[y];
		i++;
		y++;
	}
	join[i] = '\0';
	return (join);
}
