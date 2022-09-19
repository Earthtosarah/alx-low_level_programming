#include "main.h"

/**
 * _puts - prints a string
 * *@str: A pointer to an int
 * Return: void
 */

void _puts(char *str)
{
	char *c;
	int n;

	c = str;
	n = 0;

	while (c[n])
	{
		_putchar(c[n]);
		n++;
	}
	_putchar('\n');
}
