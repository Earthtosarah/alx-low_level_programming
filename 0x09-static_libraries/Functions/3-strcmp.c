#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: A pointer to a character that will be changed
 * @s2: a pointer
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	char *p = s1;
	char *pp = s2;

	while (*p != '\0' && *pp != '\0' && *p == *pp)
	{
		p++;
		pp++;
	}
	return (*p - *pp);
}
