#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of argument passed into the cmd
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%i\n", argc - 1);
	return (0);
}
