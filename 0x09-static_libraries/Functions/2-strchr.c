#include "main.h"

/**
 * _strchr - a function that returns a pointer to the first occurrence of c
 * @s: the string
 * @c: charactere
 * Return: a pointer to the first occurence of the character C
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
