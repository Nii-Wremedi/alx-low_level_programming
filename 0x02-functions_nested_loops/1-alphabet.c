#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
	_putchar('\n');
}
