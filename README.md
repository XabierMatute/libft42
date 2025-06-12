# libft42

## Overview

**libft42** is a custom implementation of the standard C library functions, created as part of the **42 School curriculum**. This project serves as a foundation for future projects, providing a set of general-purpose functions that can be reused across different programs. The library includes functions for string manipulation, memory management, character checks, and more. Additionally, several features and enhancements have been added beyond the original subject requirements, showcasing creativity and technical proficiency.

## Features

### Core Functionality
The library replicates many standard C library functions, organized into categories for better modularity:

#### Character Checks (`ft_is`)
- `ft_isalpha`: Checks if a character is alphabetic.
- `ft_isdigit`: Checks if a character is numeric.
- `ft_isalnum`: Checks if a character is alphanumeric.
- `ft_isascii`: Checks if a character is part of the ASCII set.
- `ft_isprint`: Checks if a character is printable.

#### String Manipulation (`ft_str`)
- `ft_strlen`: Calculates the length of a string.
- `ft_strchr` and `ft_strrchr`: Locate characters in a string.
- `ft_strncmp`: Compares strings up to a specified length.
- `ft_strlcpy` and `ft_strlcat`: Copy and concatenate strings safely.
- `ft_strdup`: Duplicates a string.
- `ft_substr`: Extracts a substring from a string.
- `ft_strjoin`: Joins two strings into one.
- `ft_strtrim`: Removes specified characters from the start and end of a string.
- `ft_split`: Splits a string into an array based on a delimiter.
- `ft_strmapi`: Applies a function to each character of a string.
- `ft_striteri`: Iterates over a string and applies a function.

#### Memory Management (`ft_mem`)
- `ft_memset`: Fills a block of memory with a specific value.
- `ft_memcpy` and `ft_memmove`: Copy memory blocks safely.
- `ft_memchr`: Searches for a value in a memory block.
- `ft_memcmp`: Compares memory blocks.
- `ft_calloc`: Allocates memory and initializes it to zero.
- `ft_bzero`: Sets a block of memory to zero.
- `free2`: Frees a double pointer array.
- `ft_parrlen`: Calculates the length of a pointer array.

#### Conversion Functions (`ft_to`)
- `ft_atoi`: Converts a string to an integer.
- `ft_itoa`: Converts an integer to a string.
- `ft_toupper` and `ft_tolower`: Convert characters to uppercase or lowercase.

#### Output Functions (`ft_put`)
- `ft_putchar`: Writes a character to standard output.
- `ft_putstr`: Writes a string to standard output.
- `ft_putendl`: Writes a string followed by a newline.
- `ft_putnbr`: Writes an integer to standard output.
- `ft_putnbr_base`: Writes an integer in a specified base.
- `ft_putunbr`: Writes an unsigned integer.
- `ft_putptr`: Writes a pointer address.
- `ft_putva`: Handles variadic arguments for formatted output.

#### Linked List Functions (`ft_list`)
- `ft_lstnew`: Creates a new linked list node.
- `ft_lstadd_front` and `ft_lstadd_back`: Add nodes to the front or back of a list.
- `ft_lstsize`: Calculates the size of a linked list.
- `ft_lstlast`: Retrieves the last node of a linked list.
- `ft_lstdelone`: Deletes a single node.
- `ft_lstclear`: Clears a linked list.
- `ft_lstiter`: Iterates over a linked list and applies a function.
- `ft_lstmap`: Creates a new list by applying a function to each node.

#### Additional Features
- **Swap Functions (`ft_swap`)**: `ft_swap_p` swaps two pointers.
- **Printf Implementation (`ft_printf`)**: Custom implementation of `printf` with support for formatted output.

### Enhancements Beyond the Original Subject
The following features were added beyond the original requirements:
- **Variadic Output Functions**: `ft_putva` and its variants handle formatted output using variadic arguments.
- **Pointer Array Utilities**: Functions like `free2` and `ft_parrlen` simplify working with pointer arrays.
- **Custom Printf**: A lightweight implementation of `printf` (`ft_printf`, `ft_dprintf`, `ft_eprintf`) for formatted output.
- **Swap Functionality**: `ft_swap_p` provides a utility for swapping pointers.
- **Extended Memory Management**: Additional utilities like `free2` enhance memory handling.

## Code Structure

The project is organized into modular files and headers:
- **Headers**: Each category has its own header file (e.g., `ft_is.h`, `ft_str.h`, `ft_mem.h`) for better organization.
- **Source Files**: Functions are implemented in separate `.c` files, grouped by category.
- **Makefile**: Automates compilation and includes targets for cleaning and testing.

## Competencies Involved

### Technical Skills
- **C Programming**: Mastery of the C language, including pointers, memory management, and modular programming.
- **Algorithm Design**: Efficient implementations of string manipulation, memory handling, and linked list operations.
- **Custom Printf**: Understanding of variadic arguments and formatted output.

### Problem-Solving
- **Edge Case Handling**: Managing unexpected inputs and boundary conditions.
- **Optimization**: Ensuring efficient and scalable implementations.
- **Memory Safety**: Preventing leaks and ensuring proper allocation/deallocation.

### Collaboration
- **Code Organization**: Structuring the project for readability and maintainability.
- **Documentation**: Writing clear comments and a comprehensive README.

## How to Build and Use

1. Clone the repository.
2. Compile the library using the provided Makefile:
   ```sh
   make
   ```
3. Link the library to your project:
   ```sh
   gcc your_program.c -L. -lft -o your_program
   ```
4. Include the header file in your program:
   ```c
   #include "libft.h"
   ```

## Acknowledgments

This project was developed as part of the **42 School curriculum**. Special thanks to the 42 community for their support and resources.