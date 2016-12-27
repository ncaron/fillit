# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/21 20:02:04 by Niko              #+#    #+#              #
#    Updated: 2016/12/27 13:03:40 by Niko             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRCS = srcs/main.c \
	   srcs/reader.c \
	   srcs/assign.c \
	   srcs/validator.c \
	   srcs/solver.c \
	   srcs/resize.c \
	   srcs/map.c

INCLUDES = fillit.h

LIBFT = ./includes/libft/libft.a

all: $(LIBFT) $(NAME)

$(LIBFT):
	make -C ./includes/libft

$(NAME):
	gcc $(FLAGS) $(SRCS) -o $(NAME) $(LIBFT)

clean:
	make clean -C ./includes/libft

fclean: clean
	make fclean -C ./includes/libft
	rm -f $(NAME)

re: fclean all
