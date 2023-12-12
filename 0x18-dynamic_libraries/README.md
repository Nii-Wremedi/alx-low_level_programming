# Project Title

Dynamic Libraries and Code Injection

## Description

This project focuses on creating dynamic libraries in C and performing code injection using the LD_PRELOAD technique. The tasks involve implementing various C functions, creating dynamic libraries, and injecting code to potentially win the Giga Millions lottery.

## Files and Directories

- `0x18-dynamic_libraries/`: Main project directory.
  - `libdynamic.so`: Dynamic library containing essential C functions.
  - `main.h`: Header file with function prototypes.
  - `1-create_dynamic_lib.sh`: Bash script to create a dynamic library from all C files in the current directory.
  - `100-operations.so`: Dynamic library with C functions callable from Python.
  - `100-tests.py`: Python script to test the C functions.
  - `101-make_me_win.sh`: Shell script for code injection to potentially win the Giga Millions lottery.

## Requirements

- C language
- Bash scripting
- Ubuntu 20.04 LTS
- gcc compiler with specific options
- Editors: vi, vim, emacs
- Betty style for C code
- No global variables
- Limited functions per file
- No standard library functions except for `_putchar`
- README.md file at the project root

## Instructions

1. **Dynamic Library Creation**
    - Compile and create `libdynamic.so` containing various C functions.
    - Use `nm` to display the symbols in the dynamic library.

    ```bash
    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -shared -o libdynamic.so
    nm -D libdynamic.so
    ```

2. **Library from All Files**
    - Run the script `1-create_dynamic_lib.sh` to create `liball.so` from all C files in the current directory.

    ```bash
    ./1-create_dynamic_lib.sh
    nm -D --defined-only liball.so
    ```

3. **C Functions from Python**
    - Execute the Python script `100-tests.py` to call C functions from Python.

    ```bash
    python3 100-tests.py
    ```

4. **Code Injection for Giga Millions**
    - Run the code injection script `101-make_me_win.sh` exactly 98 seconds before running the Giga Millions program.

    ```bash
    . ./101-make_me_win.sh
    ```

## Notes

- Ensure LD_LIBRARY_PATH is set appropriately for dynamic library linkage.
- Follow the provided instructions and avoid using restricted characters and commands.

## Author

[NII WREMEDI for ALXSE]


