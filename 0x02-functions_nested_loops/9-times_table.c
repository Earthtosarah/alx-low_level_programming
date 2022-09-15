#include "main.h"
/**
* times_table -prints tables
* Return: Always 0.
*/
void times_table(void)
{
	int a, b, c;

	a = 0;

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = a * b;

			_putchar(',');
			_putchar(' ');
			if (c <= 9)
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}

