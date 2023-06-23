# Project Title: Variadic Functions

This project consists of a set of functions that demonstrate the use of variadic functions in C. Variadic functions are functions that can accept a variable number of arguments.

## Requirements

- The code must be written in C and compiled using `gcc` on Ubuntu 20.04 LTS.
- The compilation flags `-Wall -Werror -Wextra -pedantic -std=gnu89` should be used.
- All files must end with a new line.
- The code must follow the Betty coding style, as checked by `betty-style.pl` and `betty-doc.pl`.
- Global variables are not allowed.
- Each file should contain no more than 5 functions.
- The only allowed standard library functions are `malloc`, `free`, and `exit`. Functions like `printf`, `puts`, `calloc`, and `realloc` are forbidden.
- The following macros are allowed: `va_start`, `va_arg`, and `va_end`.
- The `_putchar` function can be used, but the implementation file (`_putchar.c`) should not be included.
- The prototypes of all functions, including `_putchar`, should be included in the `variadic_functions.h` header file.
- The header files should be include guarded.

## Files

The project contains the following files:

- `0-sum_them_all.c`: This file defines the function `int sum_them_all(const unsigned int n, ...)`, which calculates the sum of a variable number of integers.
- `1-print_numbers.c`: This file contains the function `void print_numbers(const char *separator, const unsigned int n, ...)`, which prints a variable number of integers.
- `2-print_strings.c`: This file includes the function `void print_strings(const char *separator, const unsigned int n, ...)`, responsible for printing a variable number of strings.
- `3-print_all.c`: This file implements the function `void print_all(const char * const format, ...)`, which prints a variable number of arguments based on a given format string.

## Usage

Each function can be tested by compiling it with a main file (not included in the repository). The main file should call the desired function with the appropriate arguments. Below are examples of compiling and running each function:

### Example: Testing `sum_them_all`

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o sum
$ ./sum
1122
500
```

### Example: Testing `print_numbers`

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o numbers
$ ./numbers
0, 98, -1024, 402
```

### Example: Testing `print_strings`

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o strings
$ ./strings
Jay, Django
```

### Example: Testing `print_all`

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o all
$ ./all
B, 3, stSchool
```

## Author.
