#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string to be printed
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0' && a < _strlen(str); a += 2)
		_putchar(str[a]);

	_putchar('\n');
}
