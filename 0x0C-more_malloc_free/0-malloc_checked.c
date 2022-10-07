#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc and exit if failed
 * @b: an int
 * Return: a pointer to the iniatialized array
 */

void *malloc_checked(unsigned int b)
{
	int *m;

	m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	return (m);
}
