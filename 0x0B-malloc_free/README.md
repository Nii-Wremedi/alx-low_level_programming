# Project Name - 0x0B. C - malloc, free

This project is a collection of functions that demonstrate the usage of dynamic memory allocation in the C programming language.

## Table of Contents

- [Description](#description)
- [Files](#files)
- [Requirements](#requirements)
- [Usage](#usage)
- [Credits](#credits)
- [License](#license)

## Description

The project consists of several C files, each containing one or more functions that perform specific tasks related to dynamic memory allocation. The functions are implemented using `malloc` and `free` functions and follow the requirements specified in the project guidelines.

## Files

The project is organized into the following files:

1. `0-create_array.c`: Contains a function to create an array of characters and initialize it with a specific character.
2. `1-strdup.c`: Contains a function to duplicate a string and return a pointer to the duplicated string.
3. `2-str_concat.c`: Contains a function to concatenate two strings and return a pointer to the resulting string.
4. `3-alloc_grid.c`: Contains a function to allocate and initialize a 2-dimensional array of integers.
5. `4-free_grid.c`: Contains a function to free the memory allocated for a 2-dimensional grid.

## Requirements

- The code is written in C programming language.
- The code is compiled on Ubuntu 20.04 LTS using gcc.
- The code follows the specified compiler flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- The code adheres to the Betty style guidelines.
- The code does not use global variables.
- The code has a maximum of 5 functions per file.
- The only C standard library functions allowed are `malloc` and `free`.
- The code includes the prototype of each function in the `main.h` header file.
- A `README.md` file is included at the root of the project folder.

## Usage

1. Clone the repository to your local machine.
2. Compile the C files using the provided compilation command.
3. Run the generated executable file to test the functions.

Example:

```bash
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
$ ./a
```

## Credits

This project is part of the ALX Low-Level Programming curriculum. The initial code templates and instructions were provided by ALX.
