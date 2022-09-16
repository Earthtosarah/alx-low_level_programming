#include "main.h"

/**
 * print_square - checks for a digit and print a square of the size
 * @size: an integer
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	i = 0;

	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
