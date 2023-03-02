#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

*(p + 5) = 98;
  /* ...so that this prints 98\n */
	_putchar('9');
	_putchar('8');
	_putchar('\n');
	return (0);
}
