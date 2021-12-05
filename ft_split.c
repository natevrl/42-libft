/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:20:16 by nbenhado          #+#    #+#             */
/*   Updated: 2021/11/29 17:01:15 by nbenhado         ###   ########.fr       */
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
	while (str[debut] != c && str[debut])
	{
		i++;
		debut++;
	}
	return (i);
}

static int	number_of_tabs(char const *str, char c)
{
	int	i;
	int	number;

	number = 0;
	i = 0;
	while (str[i])
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

	tab_de_tab = malloc(sizeof(char *) * (number_of_tabs(s, c) + 1));
	if (!tab_de_tab)
		return (0);
	i = 0;
	f = 0;
	while (i < ft_strlen(s))
	{
		if (s[i] != c)
		{
			tab_de_tab[f] = split_copy(s, i, next_c(s, i, c));
			i += next_c(s, i, c) - 1;
			f++;
		}
		i++;
	}
	tab_de_tab[f] = 0;
	return (tab_de_tab);
}
<<<<<<< HEAD

#include <stdio.h>

int main()
{
	int i = 0;
	char str[] = "adwad1adad1ad1aad1";


	printf("%ld\n", number_of_tabs(str, '1'));
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
=======
>>>>>>> 277d864c60d17df09349798e7e2bab29bc7adc03
