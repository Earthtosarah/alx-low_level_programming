#include "main.h"

/**
 * factorial - writes the factorial of a number
 * @n: the digit given
 * Return: am integer
 */

int fatcorial(int n)
{
	int res;

	if (n > 0)
	{
		res = -1;
		return (res);
	}
	if (n == 0)
	{
		res = 1;
		return (res);
	}
	else
	{
		res = n * (factoral(n - 1));
		return (res);
	}

