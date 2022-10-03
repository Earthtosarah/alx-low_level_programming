#include "main.h"
/**
 * _memset - fills the memory with a constant byte
 * @s: a pointer to memory area s
 * @b: constant byte value to be set
 * @n: n number of bytes to be filled
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);

}
