#include "main.h"
#include <stdio.h>
/**
 * infinite_add - Adds two numbers.
 *
 * @n1: The first number.
 * @n2: The second number.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result or 0 if it can not be stored in r.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, i = 0, j = 0, sum = 0, carry = 0;

	/* Calculate the lengths of n1 and n2 */
	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;

	/* Check if the result can be stored in r */
	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);

	/* Add the numbers digit by digit */
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry > 0; i--, j--)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';
		carry = sum / 10;
		r[(i > j ? i : j) + 1] = (sum % 10) + '0';
	}

	/* Add the null terminator */
	r[(i > j ? i : j) + 2] = '\0';

	/* Reverse the string */
	len1 = 0;
	len2 = (i > j ? i : j) + 1;
	while (len1 < len2)
	{
		sum = r[len1];
		r[len1] = r[len2];
		r[len2] = sum;
		len1++;
		len2--;
	}

	return (r);
}

