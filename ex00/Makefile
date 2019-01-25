# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mislamov <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/21 15:01:04 by mislamov          #+#    #+#              #
#    Updated: 2019/01/22 17:46:51 by mislamov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

IF = srcs/ft_swap.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c \
	 srcs/ft_strcmp.c

OF = ft_swap.o ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o

INCL = includes/

all: $(NAME)

$(NAME):
	gcc -c $(IF) -I $(INCL)  -Wall -Wextra -Werror
	ar rc $(NAME) $(OF)
	ranlib $(NAME)
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
