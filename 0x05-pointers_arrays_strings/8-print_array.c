#include <stdio.h>

/**
 * print_array - a function that prints n elements of an array of integers
 * @a: array
 * @n: the  number of elements
 */

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		if (z != (n - 1))
			printf("%d, ", a[z]);
		else
			printf("%d", a[z]);
	}
	printf("\n");

}
