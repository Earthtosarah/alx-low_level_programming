#include "main.h"
/**
 * _abs - checks for the absolute value of an integer
 * @n: input value, an integer
 * Return: returns the absolute value of the integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
