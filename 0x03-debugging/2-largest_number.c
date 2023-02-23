#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
*/

int main(void)
{
		int largest(int a, int b, int c);

		a = 972;
		b = -98;
		c = 0;
		if (a > b && c > b)
	{
		largest = a;
	}
	else if (b > a && a > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
		printf("%d is the largest number\n", largest);

		return (0);
}
