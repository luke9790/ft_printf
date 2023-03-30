# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmasetti <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 10:36:52 by lmasetti          #+#    #+#              #
#    Updated: 2022/11/15 09:43:32 by lmasetti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME		:= libftprintf.a
CC		:= gcc
CFLAGS		:= -Wall -Wextra -Werror -c
CPPFLAGS	:= -I include

SRCS		:= \
	src/ft_printf.c \
	src/funzioni1.c \
	src/funzioni2.c \
	src/utility.c
OBJS		:= $(SRCS:.c=.o)

RM			:= rm -rf

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(CPPFLAGS) $< -o $@

clean:
	$(RM) $(OBJS)

fclean: 	clean
	$(RM) $(NAME)

re: fclean all
