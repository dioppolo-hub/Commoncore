NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

AR = ar rcs

LIBFT_DIR = libft

LIBFT = $(LINFT_DIR)/libft.a

SRC = src/main.c

OBJ = $(SRC:.c=.o)

INCLUDES = -I include -I $(LIBFT_DIR)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ) $(LIBFT)

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fcclean

re: fclean all

.PHONY: all clean fclean re
