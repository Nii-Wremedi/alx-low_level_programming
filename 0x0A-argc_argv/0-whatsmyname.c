#include <stdio.h>
#include "main.h"

/**
 * main - program that prints it's name
 * @argc: argument count
 * @argv: pointer to array of arguments (arg vectors)
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
