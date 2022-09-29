#include "main.h"

/**
 * _strlen_recursion - rwturns the length of a strung
 * @s: a pointer to a string
 * Return: an integer
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
