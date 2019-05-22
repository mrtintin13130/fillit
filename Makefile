# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mathomas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 14:54:44 by mathomas          #+#    #+#              #
#    Updated: 2019/05/21 20:49:52 by mathomas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

INCLUDES = -I get_next_line/ get_next_line/libft/

all:
	make -C libft/ fclean && make -C libft/
	clang -Wall -Wextra -Werror -I libft -I get_next_line -o get_next_line/get_next_line.o -c get_next_line/get_next_line.c
	clang  -Wall -Wextra -Werror -I libft -I get_next_line -o main.o -c main.c
	clang -o ${NAME} main.o get_next_line/get_next_line.o -I libft -L libft/ -lft
	#gcc -o${FILES} ${NAME} -Wall -Wextra -Werror ${INCLUDES}

clean:

fclean: clean

re: fclean all
