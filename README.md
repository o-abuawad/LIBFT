*This project has been created as part of the 42 curriculum by oabu-awa.*

# Libft - Your Very First Own Library

## Description

The **Libft** project is the very first project in the 42 curriculum. The goal of this project is to create a custom C standard library containing reimplementations of standard C library functions (`libc`), as well as additional utility functions for string manipulation, memory management, and linked list operations.

Building this library allows us to understand the inner workings of fundamental algorithms, master memory allocation and pointer arithmetic in C, and establish a foundational toolbox that will be reused and extended throughout future 42 projects.

---

## Library Overview & Detailed Description

The library compiles into a static archive named `libft.a` and is divided into three main components:

### 1. Part 1 - Libc Reimplementations

Standard functions reimplemented strictly adhering to their standard `man` specifications (prefixed with `ft_`):

* **Character checks & conversion**:
  * `ft_isalpha`: Checks for an alphabetic character.
  * `ft_isdigit`: Checks for a digit (`0` through `9`).
  * `ft_isalnum`: Checks for an alphanumeric character.
  * `ft_isascii`: Checks whether a character fits into the ASCII character set.
  * `ft_isprint`: Checks for any printable character including space.
  * `ft_toupper`: Converts a lowercase letter to uppercase.
  * `ft_tolower`: Converts an uppercase letter to lowercase.

* **String inspection & manipulation**:
  * `ft_strlen`: Computes the length of a string.
  * `ft_strlcpy`: Copies a string to a specific size buffer with guaranteed null-termination.
  * `ft_strlcat`: Concatenates strings to a specific size buffer with guaranteed null-termination.
  * `ft_strchr`: Locates the first occurrence of a character in a string.
  * `ft_strrchr`: Locates the last occurrence of a character in a string.
  * `ft_strncmp`: Compares two strings up to `n` bytes.
  * `ft_strnstr`: Locates a substring within a string where no more than `len` characters are searched.
  * `ft_strdup`: Allocates and duplicates a string.

* **Memory management**:
  * `ft_memset`: Fills a memory area with a constant byte.
  * `ft_bzero`: Erases data in the memory area by writing zeros.
  * `ft_memcpy`: Copies memory area between non-overlapping buffers.
  * `ft_memmove`: Copies memory area safely handling overlapping regions.
  * `ft_memchr`: Scans memory for a specific byte.
  * `ft_memcmp`: Compares memory areas.
  * `ft_calloc`: Allocates memory initialized to zero, ensuring valid unique pointers for 0-size allocations.

* **Conversion**:
  * `ft_atoi`: Converts the initial portion of a string to an integer.

### 2. Part 2

Utility functions either not included in the standard libc or implemented in an extended form:

* `ft_substr`: Extracts a substring from a string.
* `ft_strjoin`: Concatenates two strings into a newly allocated string.
* `ft_strtrim`: Trims characters specified in a set from the beginning and end of a string.
* `ft_split`: Splits a string into an array of substrings using a delimiter character.
* `ft_itoa`: Converts an integer into a null-terminated string.
* `ft_strmapi`: Creates a new string by applying a function to each character with its index.
* `ft_striteri`: Applies a function to each character of a string in-place by passing its address and index.
* `ft_putchar_fd`: Writes a character to a specified file descriptor.
* `ft_putstr_fd`: Writes a string to a specified file descriptor.
* `ft_putendl_fd`: Writes a string followed by a newline to a specified file descriptor.
* `ft_putnbr_fd`: Writes an integer to a specified file descriptor.

### 3. Part 3 - Linked List Functions

Functions designed to manipulate singly linked lists defined by the `t_list` structure:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

* `ft_lstnew`: Allocates and initializes a new list node.
* `ft_lstadd_front`: Adds a new element at the beginning of the list.
* `ft_lstsize`: Counts the number of elements in the list.
* `ft_lstlast`: Returns the last element of the list.
* `ft_lstadd_back`: Adds a new element at the end of the list.
* `ft_lstdelone`: Frees the memory of a single node using a custom delete function.
* `ft_lstclear`: Deletes and frees an entire list and sets its head pointer to `NULL`.
* `ft_lstiter`: Iterates through a list and applies a function to each node's content.
* `ft_lstmap`: Iterates through a list, applies a function to create a new mapped list, and handles clean deallocation on failure.

---

## Instructions

### Compilation

To compile the library, run the following command in the root directory:

```bash
make
```

This compiles all source files with `cc` using the `-Wall -Wextra -Werror` flags and generates the static library archive `libft.a`.

### Makefile Rules

* `make` or `make all`: Compiles the library `libft.a`.
* `make bonus`: Compiles the library including list manipulation functions.
* `make clean`: Removes all compiled object files (`.o`).
* `make fclean`: Removes all compiled object files and the `libft.a` archive.
* `make re`: Performs a full re-compilation (`fclean` followed by `all`).

### Using Libft in Your Project

To use the library in a C program:

1. Include the header file in your C source code:
   ```c
   #include "libft.h"
   ```

2. Compile your program linking the `libft.a` library:
   ```bash
   cc -Wall -Wextra -Werror main.c -L. -lft -o my_program
   ```

---

## Resources

### References
* Linux Programmer's Manual (`man 3 strlen`, `man 3 memcpy`, `man 3 calloc`, etc.)
* [The C Programming Language (Second Edition) - Kernighan & Ritchie](https://en.wikipedia.org/wiki/The_C_Programming_Language)
* Apple Open Source Libc / FreeBSD libc documentation for `strlcpy` and `strlcat`

### AI Usage
AI tools were consulted during the development and verification process for:
* Analyzing edge cases and boundary conditions (e.g. `len == 0` in `ft_strnstr`, integer overflow on `INT_MIN` in `ft_atoi`, buffer sizing).
* Verifying conformance with 42 Norminette standards.
* Debugging function prototype signatures against the subject PDF specification (e.g., `ft_lstsize` returning `unsigned int`).
