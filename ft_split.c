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

/*static int	count_words(const char *str, char c)
{
	int i;
	int trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (*str != c && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (*str == c)
			trigger = 0;
		str++;
	}
	return (i);
}*/

/*static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char		**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**split;

	if (!s || !(split = malloc((count_words(s, c) + 1) * sizeof(char *))))
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			split[j++] = word_dup(s, index, i);
			index = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}*/


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
			i += next_c(str, i, c);
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
			printf("%ld\n", i);
			//printf("%d\n", next_c(s, i, c));
			tab_de_tab[f] = split_copy(s, i, next_c(s, i, c));
			f++;
			i += next_c(s, i, c) - 1;
		}
		i++;
	}
	tab_de_tab[f] = 0;
	return (tab_de_tab);
}

#include <stdio.h>

int main()
{
	int i = 0;
	char str[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi."

	char **tab;

	printf("%d\n", number_of_tabs(str, 'z'));
	//printf("%d\n", next_c(str, 5, '1'));
	tab = ft_split(str, '1');
	while (tab[i])
	{
		printf("tab[%d] : %s\n", i, tab[i]);
		i++;
	}
    printf("%s",tab[i]);
	return (0);
}
