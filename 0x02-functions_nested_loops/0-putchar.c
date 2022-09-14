#include "main.h"

/**
 * main - entry point
 * Description - prints _putchar
 * Return: 0 on success
 */
int main(void)
{
	char c[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
		_putchar('\n');

	return (0);
}
