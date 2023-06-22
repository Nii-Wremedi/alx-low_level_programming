# Project README

This project contains multiple tasks that involve working with function pointers in the C programming language. The tasks range from basic function pointer usage to more advanced concepts. Below you will find a description of each task and the files associated with them.

## Task 0: What's my name
**File**: 0-print_name.c

This task involves writing a function `print_name` that takes a string `name` and a function pointer `f`. The function `print_name` should call the function `f` with the provided `name` as an argument.

## Task 1: If you spend too much time thinking about a thing, you'll never get it done
**File**: 1-array_iterator.c

In this task, you need to implement a function `array_iterator` that iterates over an array of integers and applies a given function `action` to each element of the array.

## Task 2: To hell with circumstances; I create opportunities
**File**: 2-int_index.c

The task requires implementing a function `int_index` that searches for an integer in an array. The function takes an array, its size, and a function pointer `cmp` as arguments. It returns the index of the first element for which the `cmp` function does not return 0. If no element matches the condition, the function returns -1.

## Task 3: A goal is not always meant to be reached, it often serves simply as something to aim at
**Files**: 3-calc.h, 3-op_functions.c, 3-get_op_func.c, 3-main.c

This task involves creating a program that performs simple operations (+, -, *, /, %) on two integers. The program takes the operator and operands as command-line arguments and prints the result of the operation. The implementation includes four different files:
- `3-calc.h`: Contains function prototypes and data structures used by the program.
- `3-op_functions.c`: Defines the functions for each operation (addition, subtraction, multiplication, division, modulo).
- `3-get_op_func.c`: Selects the correct function based on the provided operator.
- `3-main.c`: Contains the main function and handles user input.

## Task 4: Most hackers are young because young people tend to be adaptable. As long as you remain adaptable, you can always be a good hacker
**File**: 100-main_opcodes.c

This task involves writing a program that prints the opcodes of its own `main` function. The program takes the number of bytes to print as a command-line argument and outputs the opcodes in hexadecimal format.

## Requirements
- Allowed editors: vi, vim, emacs
- All files should be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A `README.md` file at the root of the project is mandatory
- Code should follow the Betty style, and it will be checked using `betty-style.pl` and `betty-doc.pl`
- Global variables are not allowed
- Each file should not contain more than 5 functions
- The only C standard library functions allowed are `malloc`, `free`, and `exit`
- `_putchar.c` is not required for submission
- The prototypes of all functions and the prototype of `_putchar` should be included in a header file called `function_pointers.h`
- Header files should have include guards to prevent double inclusion
