#include "main.h"

/**
 * print_triangle - displays a right triangular pattern
 * @size: an integer
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	/* row number */
	int j;
	/* number of spaces before # symbol */
	int k;
	/* # */

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar(#);
			}
			_putchar('\n');
		}
	}
}
