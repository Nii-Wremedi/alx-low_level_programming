#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @s: string to be reversed
 */

void print_rev(char *s)
{

	int length = 0;
	int a;

	while (*s != '\0')
	{
		length++;
		++s;
	}

	s--;

	for (a = len; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
