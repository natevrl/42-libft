SRCS		= ft_calloc.c\
			  ft_isprint.c \
			  ft_memcpy.c \
			  ft_putnbr_fd.c \
			  ft_strdup.c \
			  ft_strmapi.c \
			  ft_substr.c\
			  ft_isalnum.c\
			  ft_itoa.c \
			  ft_memmove.c\
			  ft_putstr_fd.c\
			  ft_strjoin.c\
			  ft_strncmp.c \
			  ft_tolower.c\
			  ft_isalpha.c\
			  ft_memset.c\
			  ft_split.c\
			  ft_strlcat.c\
			  ft_strnstr.c\
			  ft_toupper.c\
			  ft_atoi.c\
			  ft_isascii.c\
			  ft_memchr.c\
			  ft_putchar_fd.c\
			  ft_strchr.c\
			  ft_strlcpy.c\
			  ft_strrchr.c\
			  ft_bzero.c\
			  ft_isdigit.c\
			  ft_memcmp.c\
			  ft_putendl_fd.c\
			  ft_strcmp.c\
			  ft_strlen.c\
			  ft_strtrim.c    

OBJS		= ${SRCS:.c=.o}

NAME		= libft.a

CC			= cc

RM			= rm -f

CFLAGS 		= -Wall -Wextra -Werror

all:		${NAME} 

.c.o: 
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rc ${NAME} ${OBJS} 

clean:	
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
