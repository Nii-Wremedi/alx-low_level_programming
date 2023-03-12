#include "main.h"

/**
 * _memcpy - copies n bytes from address src to dest address
 * @dest: pointer to destination
 * @src: pointer to source address
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
