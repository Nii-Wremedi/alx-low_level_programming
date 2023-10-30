File I/O Project - 0x15. File Descriptors and Permissions
This repository contains the code for a set of C programs that work with file descriptors, file operations, and permissions. The project is part of the ALX School curriculum and serves as an introduction to low-level I/O operations in C.

Prerequisites
You should have a C compiler installed (gcc is recommended).
The code is written in C and follows the C90 standard.
A Unix-based operating system, such as Ubuntu 20.04 LTS, is recommended for compiling and running the programs.
Project Structure
This project includes several C programs, each addressing a specific task:

0-read_textfile.c

A program that reads a text file and prints its contents to the standard output.
Usage: ./a.out filename letters
1-create_file.c

A program that creates a new file with a specified text content.
Usage: ./a.out filename "text content"
2-append_text_to_file.c

A program that appends text to the end of an existing file.
Usage: ./a.out filename "text content"
3-cp.c

A program that copies the content of one file to another.
Usage: ./a.out file_from file_to
100-elf_header.c

A program that displays information from the ELF header of an ELF file.
Usage: ./a.out elf_filename
Usage
To compile any of the programs, use the following format:

shell
Copy code
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 source_file.c -o executable
For example, to compile the 0-read_textfile.c program:

shell
Copy code
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-read_textfile.c -o read_textfile
To run the compiled program, use the following format:

shell
Copy code
./executable [arguments]
For example, to read and print the contents of a text file:

shell
Copy code
./read_textfile filename 1024
Requirements
The code follows the Betty style guide.
The code should compile with the options -Wall -Werror -Wextra -pedantic -std=gnu89.
All functions must be properly documented and include function prototypes in a header file.
Each program provides usage instructions if run without arguments or with the wrong number of arguments.
