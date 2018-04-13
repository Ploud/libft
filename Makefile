# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jsobel <jsobel@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/12 19:05:44 by jsobel            #+#    #+#              #
#    Updated: 2018/04/12 19:23:58 by jsobel           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_*.c

OBJ = ft_*.o

HEAD = -I libft.h

FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(FLAG) $(HEAD) -c $(SRC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
