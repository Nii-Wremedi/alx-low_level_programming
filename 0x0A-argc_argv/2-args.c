#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all the arguments it recieves
 * including the program name
 * @argc: argument count
 * @argv: pointer to array of arguments (arg vector)
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
