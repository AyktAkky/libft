# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 18:51:03 by aakkaya           #+#    #+#              #
#    Updated: 2022/02/15 20:29:21 by aakkaya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRCS=$(wildcard *.c)

OBJS=$(SRCS:.c=.o)

BONUS=

BONUS_OBJS=$(BONUS:.c=.o)

CC=gcc
CFLAGS=-I. -Wall -Wextra -Werror

.PHONY: all clean fclean re bonus git

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(DEPS)
	$(CC) -c $^

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
git:
	git add .
	git commit -m "libft"
	git push