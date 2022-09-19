#include "main.h"

/**
 * _strlen - returns the length of a string
 * *@s: char
 * Return: length of the array
 */

int _strlen(char *s)
{
	int n = 0;
	int len = 0;

	while (s[n] != '\0')
	{
		len += 1;
		n++;
	}
	return (len);
}
