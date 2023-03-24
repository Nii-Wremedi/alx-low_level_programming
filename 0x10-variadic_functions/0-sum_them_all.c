#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns sum of all its parameters.
 * @n: Parameters to sum
 * Return: Sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
