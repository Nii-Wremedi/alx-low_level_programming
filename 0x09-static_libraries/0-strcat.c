#include "main.h"

/* _stract - calc length of a string
 * _strlen - lenght of string
 * @dest: The destination string
 * @src: The source string
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
    int i, j;

    i = _strlen(dest);
    j = 0;

    while (src[j])
        dest[i++] = src[j++];

    dest[i] = '\0';

    return (dest);
}
