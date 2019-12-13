# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrizkiou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/02 19:10:56 by hrizkiou          #+#    #+#              #
#    Updated: 2019/04/10 14:32:17 by hrizkiou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=gcc
CFLAGS=-Wall -Wextra -Werror
NAME=ft_display_file
SRC=*.c

all:$(NAME)

$(NAME):
	$(CC) -c $(CFLAGS) $(SRC)
	$(CC) -o $(NAME) *.o

clean:
		rm -rf *.o

fclean: clean
		rm -rf $(NAME)

re: fclean all
