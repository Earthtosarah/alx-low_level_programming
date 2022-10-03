#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: string to b updated
 * @src: strin to be updated
 * @n: bytes to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
