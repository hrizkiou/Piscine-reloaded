# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hrizkiou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/04 22:07:05 by hrizkiou          #+#    #+#              #
#    Updated: 2019/04/06 14:34:48 by hrizkiou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wextra -Wall -Werror 
NAME = libft.a 
SRC = ./srcs/*.c
HEADERS = ./includes/*.h

all:
	$(CC) -c $(CFLAGS) $(SRC) 
	ar rc $(NAME) *.o

clean:
	rm -f *.o 

fclean: clean
	rm -f $(NAME)

re: fclean all
