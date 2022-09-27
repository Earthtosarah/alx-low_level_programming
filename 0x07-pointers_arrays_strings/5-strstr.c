#include "main.h"

/**
 * _strstr - loct\ates a substring
 * @haystack: string to be searched
 * @needle: string to be searcheed for in haystack
 * Return: char
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		while (*needle != '\0' && *haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (haystack);
		}
		haystack = haystack + 1;
	}
	return ('\0');
}
