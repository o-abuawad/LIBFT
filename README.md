*This project has been created as part of the 42 curriculum by oabu-awa.*

# Libft - My Very First Own Library

## Description

Libft is the first project of the 42 curriculum. The goal is to create my own C library by reimplementing functions from the standard C library and writing additional functions that will be useful in future projects.

This project helped me understand how common C functions work internally, especially string manipulation, memory management, pointers, and dynamic allocation. It also gives me a library that I can reuse throughout the 42 curriculum.

The library is compiled into a static library called `libft.a`.

The project is divided into 3 parts:

* **Part 1:** Reimplementing functions from the C standard library.
* **Part 2:** Additional functions for strings, memory, conversions, and file descriptors.
* **Part 3:** Functions for working with singly linked lists.

---

## Library Overview

### Part 1 - Libc Functions

The first part consists of reimplementing several functions from the standard C library. All functions are prefixed with `ft_` and must behave like their original versions.

### Character checks and conversion

| Function     | Description                                               |
| ------------ | --------------------------------------------------------- |
| `ft_isalpha` | Checks if a character is alphabetic.                      |
| `ft_isdigit` | Checks if a character is a digit (`0` to `9`).            |
| `ft_isalnum` | Checks if a character is alphanumeric.                    |
| `ft_isascii` | Checks if a character belongs to the ASCII character set. |
| `ft_isprint` | Checks if a character is printable, including space.      |
| `ft_toupper` | Converts a lowercase letter to uppercase.                 |
| `ft_tolower` | Converts an uppercase letter to lowercase.                |

### String functions

| Function     | Description                                                                       |
| ------------ | --------------------------------------------------------------------------------- |
| `ft_strlen`  | Returns the length of a string.                                                   |
| `ft_strlcpy` | Copies a string into a destination buffer with size control and null termination. |
| `ft_strlcat` | Appends one string to another with size control and null termination.             |
| `ft_strchr`  | Finds the first occurrence of a character in a string.                            |
| `ft_strrchr` | Finds the last occurrence of a character in a string.                             |
| `ft_strncmp` | Compares up to `n` characters of 2 strings.                                       |
| `ft_strnstr` | Searches for a substring within a string up to a specified length.                |
| `ft_strdup`  | Creates a newly allocated copy of a string.                                       |

### Memory functions

| Function     | Description                                            |
| ------------ | ------------------------------------------------------ |
| `ft_memset`  | Fills a memory area with a specified byte.             |
| `ft_bzero`   | Sets a memory area to zero.                            |
| `ft_memcpy`  | Copies memory between 2 non-overlapping areas.         |
| `ft_memmove` | Copies memory while safely handling overlapping areas. |
| `ft_memchr`  | Searches a memory area for a specific byte.            |
| `ft_memcmp`  | Compares 2 memory areas.                               |
| `ft_calloc`  | Allocates memory and initializes it to zero.           |

### Conversion

| Function  | Description                                         |
| --------- | --------------------------------------------------- |
| `ft_atoi` | Converts the beginning of a string into an integer. |

The functions in Part 1 are implemented without relying on external functions.

---

### Part 2 - Additional Functions

The second part contains functions that are not part of the required libc functions or provide functionality in a different form.

### String manipulation

| Function      | Description                                                                                |
| ------------- | ------------------------------------------------------------------------------------------ |
| `ft_substr`   | Creates a substring starting at a given index with a maximum length.                       |
| `ft_strjoin`  | Creates a new string by joining 2 strings together.                                        |
| `ft_strtrim`  | Removes characters from the beginning and end of a string based on a given set.            |
| `ft_split`    | Splits a string into an array of strings using a delimiter character.                      |
| `ft_strmapi`  | Creates a new string by applying a function to every character with its index.             |
| `ft_striteri` | Applies a function to every character of a string and allows the character to be modified. |

### Conversion

| Function  | Description                                        |
| --------- | -------------------------------------------------- |
| `ft_itoa` | Converts an integer into a newly allocated string. |

### File descriptor output

| Function        | Description                                                 |
| --------------- | ----------------------------------------------------------- |
| `ft_putchar_fd` | Writes a character to a file descriptor.                    |
| `ft_putstr_fd`  | Writes a string to a file descriptor.                       |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor. |
| `ft_putnbr_fd`  | Writes an integer to a file descriptor.                     |

---

### Part 3 - Linked Lists

The third part adds functions for working with singly linked lists.

The list uses the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

The `content` member stores the data of the node, while `next` points to the next node. A `void *` is used for `content` so that the list can store different types of data.

| Function          | Description                                                                                      |
| ----------------- | ------------------------------------------------------------------------------------------------ |
| `ft_lstnew`       | Allocates and initializes a new list node.                                                       |
| `ft_lstadd_front` | Adds a node to the beginning of a list.                                                          |
| `ft_lstsize`      | Returns the number of nodes in a list.                                                           |
| `ft_lstlast`      | Returns the last node of a list.                                                                 |
| `ft_lstadd_back`  | Adds a node to the end of a list.                                                                |
| `ft_lstdelone`    | Deletes one node and frees its content using a given function.                                   |
| `ft_lstclear`     | Deletes and frees an entire list and sets its pointer to `NULL`.                                 |
| `ft_lstiter`      | Applies a function to the content of every node.                                                 |
| `ft_lstmap`       | Creates a new list by applying a function to every node and handles cleanup if allocation fails. |

---

## Instructions

### Compilation

The library can be compiled from the root of the repository with:

```bash
make
```

This creates the `libft.a` static library.

The Makefile uses:

```text
-Wall -Wextra -Werror
```

and `cc` to compile the source files.

### Makefile rules

The Makefile provides the following rules:

```bash
make
make all
make clean
make fclean
make re
```

* `make` / `make all` - Builds `libft.a`.
* `make clean` - Removes the object files.
* `make fclean` - Removes the object files and `libft.a`.
* `make re` - Runs `fclean` and then builds the library again.

### Using Libft

To use the library in another C project, include the header:

```c
#include "libft.h"
```

Then compile your program together with the library:

---

## Resources

### Documentation

* Linux Programmer's Manual (`man 3 strlen`, `man 3 memcpy`, `man 3 calloc`, etc.)
* [The C Programming Language - 2nd Edition](https://en.wikipedia.org/wiki/The_C_Programming_Language)
* FreeBSD libc documentation for `strlcpy` and `strlcat`

I also used the Libft subject provided by 42 as the reference for the required functions, prototypes, behavior, Makefile rules, and project requirements.

### AI Usage

AI tools were used as a support tool during development and verification, not as a replacement for understanding the project.

I used AI mainly for:

* Checking edge cases and boundary conditions.
* Checking integer edge cases such as `INT_MIN` in `ft_atoi`.
* Checking allocation and buffer-size calculations.
* Checking function prototypes against the Libft subject.
* Checking the linked list function signatures.
* Helping identify bugs during development and testing.
* Checking code against Norminette requirements.

The implementation and final decisions were made while working through the functions and testing them myself.
