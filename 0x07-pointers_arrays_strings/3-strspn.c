#include "main.h"

/**
 * _strspn - gets the lengty of a prefix substring
 * @s: the string to he checked
 * @accept: character to match
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, count = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (accecpt[j] == '\0')
		{
			break;
		}
	}
	return (count);
}
