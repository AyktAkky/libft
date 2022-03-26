# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/26 21:09:12 by aakkaya           #+#    #+#              #
#    Updated: 2022/03/26 21:12:30 by aakkaya          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a
FLAG = -Wall -Wextra -Werror
SRC = $(shell find . ! -name "ft_lst*.c" -name "ft_*.c")
BONUS = *.c
OBJ = $(SRC:.c=.o)


all: $(NAME)

$(NAME):
	gcc $(FLAG) -c $(SRC)
	ar rc $(NAME) *.o
bonus:
	gcc $(FLAG) -c $(BONUS)
	ar rc $(NAME) *.o
clean:
	/bin/rm -f  *.o
fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

git:
	git add .
	git commit -m "libft"
	git push