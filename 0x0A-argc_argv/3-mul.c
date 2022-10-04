#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies the arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true and 1 if false
 */

int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
