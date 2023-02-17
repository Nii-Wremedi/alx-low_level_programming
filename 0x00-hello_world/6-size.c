#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte", sizeof(char));
	printf("Size of a int: %d byte", sizeof(int));
	printf("Size of a long int: %d byte", sizeof(long int));
	printf("Size of a long long int: %d byte", sizeof(long long int));
	printf("Size of a float: %d byte", sizeof(float));
	return (0);
}
