NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Define the final executable name
TARGET = program

# Define the source and object files
SRCS = $(wildcard ft_*.c) main.c
OBJS = $(SRCS:.c=.o)

.PHONY: all clean fclean re

# 1. The 'all' target builds the test executable
all: $(TARGET)

# 2. Rule to build the executable from object files
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# 3. Pattern rule to compile .c files into .o files
%.o: %.c
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -f $(OBJS) test_runner

fclean: clean
	rm -f $(TARGET)

re: fclean all
