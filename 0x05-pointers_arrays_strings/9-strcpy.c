#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: A pointer to a char that will be updated
 * @src: A pointer to a char to be copied
 * Return: Dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (src[n] != '\0')
	{
		dest[n] = src[n];
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
