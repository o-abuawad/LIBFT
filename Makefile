NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCE = $(wildcard ft_*.c)
OBJ = $(SRCE:.c=.o)

all: $(NAME)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.C
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
fclean: clean
	rm -f $(NAME)
re: fclean all
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

.PHONY: all clean fclean re
