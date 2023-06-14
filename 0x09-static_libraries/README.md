# Static Libraries

This repository contains the implementation of a static library called `libmy.a` and a script called `create_static_lib.sh` for creating a static library from C files.

## Contents

- [Description](#description)
- [Usage](#usage)
- [Files](#files)
- [Requirements](#requirements)
- [Author](#author)

## Description

The static library `libmy.a` contains various functions implemented in C. These functions include:

- `_putchar`: A function to print a single character.
- `_islower`: A function to check if a character is lowercase.
- `_isalpha`: A function to check if a character is alphabetic.
- `_abs`: A function to compute the absolute value of an integer.
- `_isupper`: A function to check if a character is uppercase.
- `_isdigit`: A function to check if a character is a digit.
- `_strlen`: A function to calculate the length of a string.
- `_puts`: A function to print a string.
- `_strcpy`: A function to copy a string.
- `_atoi`: A function to convert a string to an integer.
- `_strcat`: A function to concatenate two strings.
- `_strncat`: A function to concatenate n characters from one string to another.
- `_strncpy`: A function to copy n characters from one string to another.
- `_strcmp`: A function to compare two strings.
- `_memset`: A function to fill memory with a constant byte.
- `_memcpy`: A function to copy memory from one location to another.
- `_strchr`: A function to locate the first occurrence of a character in a string.
- `_strspn`: A function to calculate the length of a prefix substring.
- `_strpbrk`: A function to search a string for any set of bytes.
- `_strstr`: A function to locate a substring in a string.

The `create_static_lib.sh` script is used to create a static library named `liball.a` from all the C files in the current directory.

## Usage

To use the static library `libmy.a` in your project, follow these steps:

1. Clone the repository:
   ```
   git clone https://github.com/your-username/alx-low_level_programming.git
   ```

2. Copy the `libmy.a` file and the `main.h` header file to your project directory.

3. Include the `main.h` header file in your source code:
   ```c
   #include "main.h"
   ```

4. Compile your source code with the library using the `-L` and `-l` options:
   ```bash
   gcc -std=gnu89 main.c -L. -lmy -o executable
   ```

   Note: Replace `main.c` with your source code file name, and `executable` with the desired name for your executable file.

5. Run the executable:
   ```bash
   ./executable
   ```

## Files

- `libmy.a`: Static library containing the implemented functions.
- `create_static_lib.sh`: Script to create a static library from C files.
- `main.h`: Header file containing the function prototypes.

## Requirements

The code in this repository was written and compiled on Ubuntu 20.04 LTS using gcc with the following options: `-Wall -Werror -Wextra -pedantic -std=gnu89`.

The scripts were tested on Ubuntu 20.04 LTS.

## Author

This repository is authored by [Your Name].
