#include "main.h"

/**
 * _memcpy - copies n bytes from memory 
 * @dest: pointer to destination memory address
 * @src: pointer to source memory address
 * @n: number of bytes to copy
 *
 * Return: @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
