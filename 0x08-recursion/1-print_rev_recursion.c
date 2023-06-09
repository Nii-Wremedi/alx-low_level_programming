#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - Function that Prints a string in reverse
 * @s: The string to be printed in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	putchar(*s);
}

/**
 * main - Entry point:
 * Return: 0 on success
 */

int main(void)
{
	_print_rev_recursion("\nNii Wremedi");
	return (0);
}
