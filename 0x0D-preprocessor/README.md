# Project Title

0x0D. C - Preprocessor

## Description

This project contains several tasks that involve working with the C preprocessor. The tasks include defining macros, using function-like macros, and exploring preprocessor directives. Each task has specific requirements and expected output.

## Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- The code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- Usage of global variables is not allowed
- Each file should contain no more than 5 functions
- Only the C standard library functions `malloc`, `free`, and `exit` are allowed. Any use of functions like `printf`, `puts`, `calloc`, `realloc`, etc., is forbidden
- Usage of `_putchar` is allowed
- The `_putchar.c` file is not required in the repository as the provided version will be used for compilation
- Header files should be include guarded

## Tasks

### 0. Object-like Macro

Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

Example:
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
$ ./a
1122
```

### 1. Pi

Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

Example:
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
$ ./b
30171.855
```

### 2. File name

Write a program that prints the name of the file it was compiled from, followed by a new line.

Example:
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
$ ./c
2-main.c
```

### 3. Function-like macro

Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

Example:
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
$ ./d
980, 980
```

### 4. SUM

Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

Example:
```
$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
$ ./e
1122
```

## Repository

This project can be found in the [alx-low_level_programming](https://github.com/example/repo) repository under the directory [0x0D-preprocessor](https://github.com/example/repo/tree/main/0x0D-preprocessor).

Each task has its corresponding file in the repository:

- Task 0: [0-object_like_macro.h](https://github.com/example/repo/blob/main/0x0D-preprocessor/0-object_like_macro.h)
- Task 1: [1-pi.h](https://github.com/example/repo/blob/main/0x0D-preprocessor/1-pi.h)
- Task 2: [2-main.c](https://github

.com/example/repo/blob/main/0x0D-preprocessor/2-main.c)
- Task 3: [3-function_like_macro.h](https://github.com/example/repo/blob/main/0x0D-preprocessor/3-function_like_macro.h)
- Task 4: [4-sum.h](https://github.com/example/repo/blob/main/0x0D-preprocessor/4-sum.h)

Note: The repository link and file names are placeholders. Please replace them with the actual repository link and file names.
