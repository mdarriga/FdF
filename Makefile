# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mdarriga <mdarriga@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/29 17:55:37 by mdarriga          #+#    #+#              #
#    Updated: 2015/02/03 12:49:44 by mdarriga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf
CCLIB = -Llibft -lft -L/usr/X11/lib -lmlx -lXext -lX11
CFLAGS = -Wall -Werror -Wextra
CC = gcc

SRC +=	main.c
SRC +=	get_next_line.c
SRC +=	tools.c
SRC +=	draw.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@make -C libft/ re
	@$(CC) $(CCLIB) -o $(NAME) $(OBJ)

clean:
	@make -C libft clean
	@rm -f $(OBJ)

fclean: clean
	@make -C libft fclean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
