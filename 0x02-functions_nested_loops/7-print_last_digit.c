#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: n is an intege
* Description: prints the last digit of a number
* Return: last digit of n
*/

int print_last_digit(int n)
{
	int mod = n % 10;

	if (mod < 0)
	{
		_putchar((-1 * mod) + '0');
		return (-1 * mod);
	}
	else
	{
		_putchar(mod + '0');
		return (mod);
	}
	_putchar('\n');
}
