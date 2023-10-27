Project Title: Binary Manipulation
Overview
This project consists of implementing a series of functions to manipulate binary numbers and perform bitwise operations. These functions should meet specific requirements and coding standards outlined in the project description. Below is a brief overview of each task:

Task 0: binary_to_uint
Write a function that converts a binary number represented as a string to an unsigned integer. The function should return the converted number or 0 if there are any non-binary characters in the string or if the string is NULL.

Task 1: print_binary
Write a function that prints the binary representation of a given unsigned long integer. This function should not use arrays, malloc, or the % or / operators.

Task 2: get_bit
Write a function that returns the value of a bit at a given index in an unsigned long integer. The function should return the value of the bit at the specified index or -1 if an error occurs.

Task 3: set_bit
Write a function that sets the value of a bit at a given index in an unsigned long integer to 1. The function should return 1 if it succeeds and -1 if an error occurs.

Task 4: clear_bit
Write a function that sets the value of a bit at a given index in an unsigned long integer to 0. The function should return 1 if it succeeds and -1 if an error occurs.

Task 5: flip_bits
Write a function that calculates the number of bits that need to be flipped in order to change one unsigned long integer to another. The function should not use the % or / operators.

Task 6: get_endianness (Advanced)
Write a function that checks the endianness of the system. It should return 0 for big endian and 1 for little endian.

Task 7: Crackme3 (Advanced)
Find the password for a program and save it in a file named 101-password. The file should contain the exact password with no extra spaces or new lines.

Requirements
Code should be written in C.
Compilation should be done on Ubuntu 20.04 LTS using the GCC compiler with specific options and coding standards.
Follow the Betty style for code formatting.
Avoid using global variables.
Each C file should contain no more than 5 functions.
Only the standard C library functions malloc, free, and exit are allowed. Functions like printf, puts, calloc, realloc, etc., are forbidden.
Include a header file named main.h with function prototypes and use include guards in header files.
The README.md file is mandatory and should provide an overview of the project, instructions for compiling and testing, and descriptions of the provided tasks.
Instructions for Compiling and Testing
To compile and test the code, follow these steps:

Clone the project repository from GitHub: alx-low_level_programming

Navigate to the 0x14-bit_manipulation directory.

Compile the code for each task using the provided main files. For example, to compile and test Task 0, run the following command:

shell
Copy code
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o task_0
Replace 0-main.c and 0-binary_to_uint.c with the appropriate source files and output filename for other tasks.

Execute the compiled program for each task to check its functionality.

Example Usage
For each task, there are example main.c files provided that demonstrate how to use the functions. After compiling, you can run the compiled program to see the results. For example:

shell
Copy code
./task_0
Note
Please make sure to follow the provided coding standards and requirements to ensure the successful completion of each task.
