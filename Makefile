# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Niko <niko.caron90@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/16 15:11:47 by Niko              #+#    #+#              #
#    Updated: 2016/12/05 17:16:43 by Niko             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRCS = srcs/main.c \
	   srcs/reader.c \
	   srcs/assign.c \
	   srcs/validator.c \
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
