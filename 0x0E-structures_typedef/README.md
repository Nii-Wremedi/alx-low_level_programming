# Project Name

## Description
This project consists of implementing a set of functions related to structures and typedef in the C programming language. The functions allow for creating, initializing, printing, and freeing instances of a dog structure.

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, with the following options: -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- The code should use the Betty style and will be checked using betty-style.pl and betty-doc.pl
- Global variables are not allowed
- Each file should contain no more than 5 functions
- The only C standard library functions allowed are `printf`, `malloc`, `free`, and `exit`
- A `README.md` file is mandatory and should be placed at the root of the project folder
- All header files should have include guards

## Files
The following files are part of the project:
- `dog.h`: Header file that contains the structure definition and function prototypes.
- `0-main.c`: Main file to test the functionality of the first task.
- `1-main.c`: Main file to test the functionality of the second task.
- `2-main.c`: Main file to test the functionality of the third task.
- `3-main.c`: Main file to test the functionality of the fourth task.
- `4-main.c`: Main file to test the functionality of the fifth task.
- `1-init_dog.c`: Function that initializes a dog structure with the given values.
- `2-print_dog.c`: Function that prints the content of a dog structure.
- `4-new_dog.c`: Function that creates a new dog structure with copies of the given values.
- `5-free_dog.c`: Function that frees the memory allocated for a dog structure.

## Compilation and Execution
To compile the code, you can use the following command:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <main_file> <function_file> -o <output_file>
```
For example, to compile and execute the first task, you can use the following commands:
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c -o a
./a
```

## Author
Nii Wremedi
