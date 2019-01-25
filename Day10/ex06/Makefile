# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mislamov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 15:01:04 by mislamov          #+#    #+#              #
#    Updated: 2019/01/22 20:35:32 by mislamov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = doop.c

IF = srcs/ft_atoi.c srcs/ft_strlen.c srcs/ft_putnbr.c

OF = do-op

all:
	gcc -o $(OF) $(IF) $(NAME)  -Wall -Wextra -Werror

clean:
	/bin/rm -f $(OF)

re: clean all
