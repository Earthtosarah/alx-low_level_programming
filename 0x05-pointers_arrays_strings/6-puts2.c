#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: a pointee
 * Return: void
 */

void puts2(char *str)
{
	int n = 0;

	while (str(n) != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
