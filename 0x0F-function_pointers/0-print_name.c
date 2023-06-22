#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints name.
 * @name: pointer to name to be printed.
 * @f: pointer to the function.
 *
 * * Function Description: This function accepts two parameters,
 * a name and a function pointer, and invokes the provided function
 * to print the name. The provided function is expected to be
 * capable of printing a string that is null-terminated.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	f(name);
}
