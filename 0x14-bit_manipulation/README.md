# Project README: Bit Manipulation

## Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General

- Look for the right source of information without too much help.
- How to manipulate bits and use bitwise operators.

## Copyright - Plagiarism

- You are tasked to come up with solutions for the tasks below yourself to meet the above learning objectives.
- You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.
- You are not allowed to publish any content of this project.
- Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- All your files should end with a new line.
- A README.md file, at the root of the folder of the project, is mandatory.
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
- You are not allowed to use global variables.
- No more than 5 functions per file.
- The only C standard library functions allowed are malloc, free, and exit. Any use of functions like printf, puts, calloc, realloc, etc., is forbidden.
- You are allowed to use _putchar.
- You don’t have to push _putchar.c; we will use our file. If you do, it won’t be taken into account.
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do, we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples.
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h.
- Don’t forget to push your header file.
- All your header files should be include guarded.

## Tasks

### 0. Binary to Unsigned Int

Write a function that converts a binary number to an unsigned int.

Prototype: `unsigned int binary_to_uint(const char *b);`
- `b` is pointing to a string of 0 and 1 chars.
- Return: the converted number, or 0 if
  - there is one or more chars in the string `b` that are not 0 or 1
  - `b` is NULL

#### Example

```c
#include <stdio.h>
#include "main.h"

int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}
```

### 1. Print Binary

Write a function that prints the binary representation of a number.

Prototype: `void print_binary(unsigned long int n);`
- Format: see example
- You are not allowed to use arrays.
- You are not allowed to use malloc.
- You are not allowed to use the % or / operators.

#### Example

```c
#include <stdio.h>
#include "main.h"

int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
```

### 2. Get Bit

Write a function that returns the value of a bit at a given index.

Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- `index` is the index, starting from 0, of the bit you want to get.
- Returns: the value of the bit at index `index` or -1 if an error occurred.

#### Example

```c
#include <stdio.h>
#include "main.h"

int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}
```

### 3. Set Bit

Write a function that sets the value of a bit to 1 at a given index.

Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- `index` is the index, starting from 0, of the bit you want to set.
- Returns: 1 if it worked, or -1 if an error occurred.

#### Example

```c
#include <stdio.h>
#include "main.h"

int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}
```

### 4. Clear Bit

Write a function that sets the value of a bit to 0 at a given index.

Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- `index` is the index, starting from 0, of the bit you want to set.
- Returns: 1 if it worked, or -1 if an error occurred.

#### Example

```c
#include <stdio.h>
#include "main.h"

int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}
```

### 5. Flip Bits

Write a function that returns the number of bits you would need to flip to get from one number to another.

Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- You are not allowed to use the % or / operators.

#### Example

```c
#include <stdio.h>
#include "main.h"

int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);


    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}
```

### 6. Endianness

Write a function that checks the endianness.

Prototype: `int get_endianness(void);`
- Returns: 0 if big endian, 1 if little endian.

#### Example

```c
#include <stdio.h>
#include "main.h"

int main(void)
{
    int n;

    n = get_endianness();
    if (n != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}
```

### 7. Crackme3

Find the password for this program.

- Save the password in the file 101-password.
- Your file should contain the exact password, no new line, no extra space.

```bash
./crackme3 `cat 101-password`
```

### AUTHOR - NII WREMEDI 
### ALX SE PROJECT ON BIT MANIPULATIONS
