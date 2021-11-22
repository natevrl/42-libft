#include "libft.h"
#include <stdlib.h>

int ftstrlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;	
	return i;
}
int isincharset(char c)
{
		if (c == ' ' || c == '\n' || c == '\t')
			return 1;
	return 0;
}

char *ftcpy(char *str, int debut, int fin)
{
	int i = 0;
	int taille = fin - debut;
	char *tab;

	tab = malloc(sizeof(int) * taille + 1);
	while (debut < fin)
	{
		tab[i] = str[debut];
		debut++;
		i++;
	}
	tab[i] = '\0';
	return tab ;
}

char **ft_split(char *str)
{
	int i;
	int f;
	int j;
	int charset_end;
	int before_charset;
	char **tab;

	tab = (char **)malloc(sizeof(char *) * 256);
	i = 0;
	f = 0;
	charset_end = 0;
	if (isincharset(str[i]))
		f = -1;
	while(str[i])
	{
		if (i == ftstrlen(str) - 1)
			tab[f] = ftcpy(str, charset_end, i + 1);
		j = 0;
		if (isincharset(str[i]))
		{
			while (isincharset(str[i]))
			{
				i++;
				j++;
			}
			before_charset = i - j;
			tab[f] = ftcpy(str, charset_end, before_charset);
			charset_end = i;
			f++;
			i--;
		}
		i++;
	}
	tab[f + 1] = 0;
	return tab;
}

#include <stdio.h>
int main()
{
	char str[] = "					\t123\nawdawd     \t123456789";

	int i = 0;
	char **res = ft_split(str);
	while (res[i])
	{
		printf("tab[%d]; %s\n", i, res[i]);
		i++;
	}
}

