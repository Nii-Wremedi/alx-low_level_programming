#include <stdio.h>
#include "main.h"

/**
 * main - program that prints number of arguments passed
 * @argc: argument count
 * @argv: pointer to array of arguments (arg vector)
 * Return: 0 on success
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
