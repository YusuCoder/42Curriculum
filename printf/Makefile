# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/18 14:16:36 by ryusupov          #+#    #+#              #
#    Updated: 2024/03/18 16:38:52 by ryusupov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

$(NAME) libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = ft_printf.c

OBJ = $(SRC:.c=.o)

AR = ar rcs
INCS = libftprintf.h
RM = rm -f

all: $(NAME)
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean: $(RM) $(OBJ)

fclean: $(RM) $(OBJ) $(NAME)

re: fclean all

.PHONY: all clean fclean re
