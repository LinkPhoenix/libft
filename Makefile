# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emlecerf <emlecerf@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/20 15:12:27 by emlecerf          #+#    #+#              #
#    Updated: 2020/11/30 17:58:21 by emlecerf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

RM			= rm -f

CC			= clang

CFLAGS		= -Wextra -Werror -Wall

SRCS		= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c\
			  ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memccpy.c\
			  ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c ft_strchr.c\
			  ft_strdup.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c\
			  ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_substr.c\
			  ft_strjoin.c ft_strtrim.c ft_split.c ft_putchar_fd.c\
			  ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c\
			  ft_itoa.c

SRCS_BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
			  ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
			  ft_lstmap.c

OBJS		= ${SRCS:.c=.o}

OBJS_BONUS	= ${SRCS_BONUS:.c=.o}

$(NAME):	${OBJS}
			ar rcs ${NAME} $(OBJS)

bonus:		${OBJS} ${OBJS_BONUS}
			ar rcs ${NAME} ${OBJS} $(OBJS_BONUS)

all:		$(NAME)

clean:
			${RM} ${OBJS} ${OBJS_BONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY: all clean fclean re bonus
