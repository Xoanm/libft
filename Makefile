# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jumorcil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/19 11:57:26 by jumorcil          #+#    #+#              #
#    Updated: 2022/07/08 13:22:23 by jumorcil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a
SRCS	=	ft_isascii.c\
			ft_isprint.c\
			ft_isalpha.c\
			ft_isalnum.c\
			ft_isdigit.c\
			ft_tolower.c\
			ft_atoi.c\
			ft_toupper.c\
			ft_bzero.c\
			ft_memset.c\
			ft_memcmp.c\
			ft_memmove.c\
			ft_memcpy.c\
			ft_memchr.c\
			ft_strrchr.c\
			ft_strlen.c\
			ft_strlcpy.c\
			ft_strlcat.c\
			ft_strdup.c\
			ft_strchr.c\
			ft_strnstr.c\
			ft_strncmp.c\
			ft_calloc.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putnbr_fd.c\
			ft_putendl_fd.c\
			ft_substr.c\
			ft_strjoin.c\

LIB		=	libft.h
OBJS	=	${SRCS:.c=.o}
CC		=	gcc
CFLAGS	=	-Wall -Werror -Wextra
RM		= 	-rm -f

.PHONY:	clean re fclean .c.o

.c.o:
	$(CC) $(CFLAGS) -c $<

$(NAME):	$(OBJS) $(LIB)
	-ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

all: $(NAME)
