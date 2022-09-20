#include "main.h"

/**
 * rev_string - prints tge reverse of a string
 * @s: value to be evaluate.
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0, l = 0, e = 0, x;
	char *y = s, n;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	for (l = len - 1; e < ((l / 2) + 1) ; e++)
	{
		x = (l - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}

}
