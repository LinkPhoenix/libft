# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/20 15:12:27 by emlecerf          #+#    #+#              #
#    Updated: 2020/11/20 19:44:48 by emlecerf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft

RM		= rm -f

CC		= clang

CFLAGS	= -Wextra -Werror -Wall

SRCS	= ft_atoi.c\
		  ft_bzero.c\
		  ft_calloc.c\
		  ft_isalnum.c\
		  ft_isalpha.c\
		  ft_isascii.c\
		  ft_isdigit.c\
		  ft_isprint.c\
		  ft_memcpy.c\
		  ft_memchr.c\
		  ft_memcmp.c\
		  ft_memmove.c\
		  ft_memset.c\
		  ft_strchr.c\
		  ft_strdup.c\
		  ft_strlcat.c\
		  ft_strlcpy.c\
		  ft_strlen.c\
		  ft_strncmp.c\
		  ft_strnstr.c\
		  ft_strrchr.c\
		  ft_tolower.c\
		  ft_toupper.c

OBJS	= ${SRCS:.c=.o}

all:	$(NAME)

$(NAME):	${OBJS} ar
	${CC} ${CFLAGS} -o $(NAME) -L. libft

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} $(NAME)

re:		fclean all

ar:		${OBJS}
	ar rc libft.a ${OBJS}

.PHONY: all clean fclean re
