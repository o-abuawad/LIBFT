NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

TARGET = a.out
SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all
