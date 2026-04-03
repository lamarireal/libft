*This project has been created as part of the 42 curriculum by arpysmak.*

## Description

Libft is a custom implementation of standard C library functions, created as an educational foundation for the 42 curriculum. This project involves recoding essential libc functions to understand how they work and to provide a utility library for use in subsequent 42 projects.

The library includes implementations of:
- Character checking functions (`isalpha`, `isdigit`, `isalnum`, etc.)
- String manipulation functions (`strlen`, `strchr`, `strdup`, `strjoin`, etc.)
- Memory functions (`memset`, `memcpy`, `memmove`, `memchr`, etc.)
- Conversion functions (`atoi`, `itoa`)
- Output functions (`putchar_fd`, `putstr_fd`, `putnbr_fd`, etc.)
- Bonus functions for list manipulation and string processing

This project helps understand fundamental C programming concepts and serves as a building block for more complex 42 projects.

## Instructions

### Compilation

To compile the library, run the following command in the root directory:

```bash
make
```

This will generate the `libft.a` static library file.

To recompile from scratch:

```bash
make re
```

To clean object files:

```bash
make clean
```

To remove all generated files:

```bash
make fclean
```

### Usage

To use libft in your projects, include the header file and link the library:

```c
#include "libft.h"
```

Compile with:

```bash
gcc -o program program.c libft.a
```

Or set up your Makefile to reference the libft library:

```makefile
LIBFT = libft.a
LIBFT_DIR = ./libft

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

program: $(LIBFT) program.c
	gcc -o program program.c $(LIBFT)
```

## Testing

Create a simple test program to verify the library functions:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
	printf("strlen(\"hello\") = %d\n", (int)ft_strlen("hello"));
	printf("ft_atoi(\"42\") = %d\n", ft_atoi("42"));
	printf("ft_isdigit('5') = %d\n", ft_isdigit('5'));
	return (0);
}
```

Compile and run:

```bash
gcc -o test test.c libft.a
./test
```

## Resources

### Classic References
- [C Standard Library Functions](https://en.wikipedia.org/wiki/C_standard_library) - Overview of standard C library functions.
- [Manual pages](https://man7.org/linux/man-pages/man3/) - Official C function documentation.
- [42 School Libft Subject] - The official project description and requirements.
- [Memory Management in C](https://www.cprogramming.com/tutorial/memory_management.html) - Understanding malloc, free, and memory operations.

## Function Examples

### String Functions
```c
char *str = ft_strdup("Hello, 42!");
char *joined = ft_strjoin(str, " libft");
int len = ft_strlen(joined);
```

### Memory Functions
```c
char *buffer = ft_calloc(10, sizeof(char));
ft_memset(buffer, 'A', 5);
ft_memcpy(buffer + 5, "libft", 5);
```

### Conversion Functions
```c
int num = ft_atoi("42");
char *str = ft_itoa(num);
```

### Character Checking
```c
if (ft_isalpha('a'))
	printf("a is alphabetic\n");
if (ft_isdigit('5'))
	printf("5 is a digit\n");
```

## Project Structure

```
libft/
├── ft_*.c              # Implementation files
├── libft.h             # Header file
└── Makefile            # Compilation rules
```
