#include "main.h"

/**
 * print_rev - prints the reverse of a string
 * @s: pointer
 * Return: Nothing
 */

void print_rev(char *s)
{
	int n = 0;
	int len = 0;

	while (s[n] != '\0')
	{
		len += 1;
		n++;
	}

	n = n - 1;

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
