# Project Name: argc, argv

This repository contains the solutions to several tasks related to command line arguments in C programming. Each task is implemented in a separate C file.

## Requirements
- The code should be written and compiled on Ubuntu 20.04 LTS using GCC.
- The following compilation flags should be used: `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All code files should end with a new line.
- The code should follow the [Betty style](https://github.com/holbertonschool/Betty/wiki) for code formatting.
- Global variables are not allowed.
- Each file should contain no more than 5 functions.
- The prototypes of all functions and the `_putchar` function should be included in the `main.h` header file.
- The `main.h` header file should be pushed to the repository.
- The standard library can be used.

## Tasks

### 0. It ain't what they call you, it's what you answer to
- File: `0-whatsmyname.c`
- Description: Write a program that prints its name.
- If the program is renamed, it should print the new name without recompiling.
- The program should not remove the path before the program name.

### 1. Silence is argument carried out by other means
- File: `1-args.c`
- Description: Write a program that prints the number of arguments passed into it.

### 2. The best argument against democracy is a five-minute conversation with the average voter
- File: `2-args.c`
- Description: Write a program that prints all arguments it receives.

### 3. Neither irony nor sarcasm is argument
- File: `3-mul.c`
- Description: Write a program that multiplies two numbers.

### 4. To infinity and beyond
- File: `4-add.c`
- Description: Write a program that adds positive numbers.

### 5. Minimal Number of Coins for Change (Advanced)
- File: `100-change.c`
- Description: Write a program that prints the minimum number of coins required to make change for an amount of money.

Make sure to pass the amount of money in cents as a command line argument.

## Usage
To compile any of the tasks, use the following command:
```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 <file_name.c> -o <output_file>
```
To run the compiled program, use:
```
./<output_file> <arguments>
```

Please note that some tasks may have specific usage instructions mentioned in their descriptions.

For more detailed information, please refer to the code files in the corresponding directories of this repository.

**Repo:**
- GitHub repository: [alx-low_level_programming](https://github.com/username/alx-low_level_programming)
- Directory: 0x0A-argc_argv
