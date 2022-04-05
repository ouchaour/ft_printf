# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yait-ouc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/26 23:22:54 by yait-ouc          #+#    #+#              #
#    Updated: 2021/12/26 23:33:43 by yait-ouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = 		ft_printf.c\
			ft_putc.c\
			ft_putu.c\
			ft_putdec.c\
			ft_puts.c\
			ft_puthex.c\
			ft_putpointer.c\


OBJECT = *.o

NAME = libftprintf.a

%.o: %.c
	gcc -Wall -Wextra -Werror -c $(SRC)

$(NAME) :
	gcc -Wall -Wextra -Werror -c $(SRC)
	ar rcs $(NAME) $(OBJECT)
	ranlib $(NAME)

all : $(NAME)

clean : 
	rm -rf *.o

fclean : clean
	rm -rf $(NAME)

re : fclean all
