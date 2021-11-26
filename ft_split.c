/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenhado <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:20:16 by nbenhado          #+#    #+#             */
/*   Updated: 2021/11/26 19:02:14 by nbenhado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ftstrlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

static int	is_in_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static char	*ft_cpy(char *str, int fin, int debut)
{
	int		taille;
	int		i;
	char	*tab;

	i = 0;
	taille = fin - debut;
	tab = malloc(taille * sizeof(char) + 1);
	if (!tab)
		return (NULL);
	while (debut < fin)
	{
		tab[i] = str[debut];
		debut++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

static void	init_var(int *i, int *f, int *charset_end)
{
	*i = -1;
	*f = 0;
	*charset_end = 0;
}

// tab[0] = i, tab[1] = stack, tab[2] = charset_end, tab[3] = j
char	**ft_split(char const *s, char c)
{
	int		tab[4];
	char	**tab_de_tab;

	init_var(&tab[0], &tab[1], &tab[2]);
	tab_de_tab = malloc(100 * sizeof(char *));
	if (!tab_de_tab)
		return (NULL);
	if (is_in_charset(s[0], &c))
		tab[1] = -1;
	while (s[++tab[0]])
	{
		if (tab[0] == ftstrlen(s) - 1)
			tab_de_tab[tab[1]] = ft_cpy((char *)s, tab[0] + 1, tab[2]);
		tab[3] = 0;
		if (is_in_charset(s[tab[0]], &c))
		{
			while (is_in_charset(s[++tab[0]], &c))
				tab[3]++;
			tab_de_tab[tab[1]++] = ft_cpy((char *)s,
					(tab[0] - 1) - tab[3], tab[2]);
			tab[2] = tab[0]--;
		}
	}
	tab_de_tab[tab[1] + 1] = 0;
	return (tab_de_tab);
}
