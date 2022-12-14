#include "main.h"
/**
 * print_sign - checks if a number is positive or negative and prints the sign
 * @n: input number, an int
 * Return: 1 if greater than 0, 0 if equal to zero, -1 if less than zero
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n');
}
