#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: a pointee
 * Return: void
 */

void puts2(char *str)
{
	int len = 0;
	int l = 0;
	char *y = str;
	int z;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	z = 0;
	l = len - 1;
	while (z <= 1)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
		z++;
	}
	_putchar('\n');
}
