#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int main(void)
{
		int a, b, c;
		int largest;

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

		return (largest);
}
