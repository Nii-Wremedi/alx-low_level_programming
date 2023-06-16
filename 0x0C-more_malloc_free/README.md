# Project Name: More Malloc, Free

## Description
This project consists of several tasks that involve working with dynamic memory allocation in C using `malloc`, `calloc`, and `realloc` functions. Each task has specific requirements and functions that need to be implemented.

The project tasks are as follows:
1. `0-malloc_checked.c`: Write a function that allocates memory using `malloc`. If `malloc` fails, the function should cause normal process termination with a status value of 98.
2. `1-string_nconcat.c`: Write a function that concatenates two strings. The returned pointer should point to a newly allocated space in memory containing `s1`, followed by the first `n` bytes of `s2`, and null-terminated. If the function fails, it should return `NULL`.
3. `2-calloc.c`: Write a function that allocates memory for an array using `malloc`. The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory. The memory is set to zero. If `nmemb` or `size` is 0, then `_calloc` returns `NULL`. If `malloc` fails, it also returns `NULL`.
4. `3-array_range.c`: Write a function that creates an array of integers. The `array_range` function should create an array containing all values from `min` to `max`, inclusive, ordered from `min` to `max`. It returns a pointer to the newly created array. If `min > max`, it returns `NULL`. If `malloc` fails, it also returns `NULL`.
5. `100-realloc.c`: Write a function that reallocates a memory block using `malloc` and `free`. The `_realloc` function takes a pointer `ptr` to the memory previously allocated with a call to `malloc` (or `_realloc`). It also takes the `old_size` and `new_size` of the memory block. The contents of the memory block are copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the `old_size` and `new_size`. If `new_size` is greater than `old_size`, the "added" memory is not initialized. If `new_size` is equal to `old_size`, the function does nothing and returns `ptr`. If `ptr` is `NULL`, the function is equivalent to calling `malloc(new_size)`. If `new_size` is equal to zero and `ptr` is not `NULL`, the function is equivalent to calling `free(ptr)` and returns `NULL`. If `malloc` fails, the function returns `NULL`.

## Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using `gcc` with the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file, at the root of the project folder, is mandatory
- Code must follow the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- Global variables are not allowed
- Each file can have a maximum of 5 functions
- Only the following standard library functions are allowed: `malloc`, `free`, and `exit`. Functions like `printf`, `puts`, `calloc`, `realloc`, etc., are forbidden.
- The prototype of all functions and the prototype of the `_putchar` function should be included in the `main.h` header file
- The `main.h` header file must be pushed to the repository
-
