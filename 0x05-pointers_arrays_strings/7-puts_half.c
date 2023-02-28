#include "main.h"

/**
 * _strlen - a function that  returns the length of a string
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
 * puts_half - prints half of a string, followed by a new line
 * @str: string to print
 */

void puts_half(char *str)
{
	int pin;
	int length = _strlen(str);

	/* find the index to start depending on even/odd amount of strlen */
	if (length % 2 != 0)
		pin = (length / 2) + 1;
	else
		pin = (length / 2);

	while (pin < length)
	{
		_putchar(*(str + pin));
		pin++;
	}
	_putchar('\n');
}
