#include "main.h"

/**
 * _strpbrk - searches a string for any string of bytes
 * @s: a pointer the string to be looked through
 * @accept:a pointer to a character
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accecpt[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}