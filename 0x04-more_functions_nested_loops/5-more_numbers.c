#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 * Return: 0
 */

void more_numbers(void)
{
	int i;
	char j, c;

	i = 0;

	while (i < 10)
	{
		for (j = 0; j < 15; j++)
		{
			c = j;
			if (j > 9)
			{
				_putchar('1');
				c = j % 10;
			}
			_putchar('0' + c);
		}
		_putchar('\n');
		i++;
	}
}
