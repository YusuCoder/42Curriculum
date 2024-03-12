NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
SRC_DIR = .
OBJ_DIR = .
INCS = libft.h
RM = rm -f

SRCS := $(shell find $(SRC_DIR) -name '*.c')
OBJS := $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INCS) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re


# NAME = libft.a

# CC = gcc
# CFLAGS = -Wall -Wextra -Werror
# AR = ar rcs
# SRC = $(wildcard *.c)
# OBJ = $(SRC:.c=.o)
# INCS = libft.h
# RM = rm -f

# all: $(NAME)

# $(NAME): $(OBJ)
# 	$(AR) $@ $^

# %.o: %.c $(INCS)
# 	$(CC) $(CFLAGS) -c $< -o $@

# clean:
# 	$(RM) $(OBJ)

# fclean: clean
# 	$(RM) $(NAME)

# re: fclean all

# .PHONY: all clean fclean re
