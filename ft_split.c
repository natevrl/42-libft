/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:20:16 by nbenhado          #+#    #+#             */
/*   Updated: 2021/11/29 15:38:04 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*split_copy(char const *str, int debut, int taille)
{
	int		i;
	char	*tab;

	i = 0;
	tab = malloc(sizeof(char) * taille + 1);
	if (!tab)
		return (NULL);
	while (i < taille)
	{
		tab[i] = str[debut];
		i++;
		debut++;
	}
	tab[i] = '\0';
	return (tab);
}

static int	next_c(char const *str, int debut, char c)
{
	int	i;

	i = 0;
	while (str[debut] != c)
	{
		i++;
		debut++;
	}
	return (i);
}

static size_t	number_of_tabs(char const *str, char c)
{
	size_t	i;
	size_t	number;

	number = 0;
	i = 0;
	while (i < ft_strlen(str))
	{
		if (str[i] != c)
		{
			i += next_c(str, i, c) - 1;
			number += 1;
		}
		i++;
	}
	return (number);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	f;
	char	**tab_de_tab;

	tab_de_tab = malloc(sizeof(char *) * number_of_tabs(s, c) + 1);
	if (!tab_de_tab)
		return (NULL);
	i = 0;
	f = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c && s[i] != '\0')
		{
			tab_de_tab[f] = split_copy(s, i, next_c(s, i, c));
			f++;
			i += next_c(s, i, c) - 1;
		}
		i++;
	}
	tab_de_tab[f] = NULL;
	return (tab_de_tab);
}

#include <stdio.h>

int main()
{
	int i = 0;
	char str[] = " ";


	printf("%ld\n", number_of_tabs(str, ' '));
	char **tab;
	tab = ft_split(str, '1');
	while (tab[i])
	{
		printf("tab[%d] : %s\n", i, tab[i]);
		i++;
	}
    printf("%s",tab[i]);
	return (0);
}
