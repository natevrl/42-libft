#ifndef LIBFT_H
# define LIBFT_H


# include <stddef.h>
# include <stdio.h>
# include <unistd.h>

size_t ft_strlen(const char *s);

int ft_tolower(int c);
int ft_toupper(int c);
int ft_atoi(const char *nptr);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);

void bzero(void *s, size_t n);
void *ft_memset(void *pointer, int value, size_t count);
void *memmove(void *dest, const void *src, size_t n);
	


char *ft_itoa(int n);
char **ft_split(char const *s, char c);
char *ft_strtrim(char const *s1, char const *set);


#endif

