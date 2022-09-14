#include "main.h"

/**
 * main - entry point
 * Description - prints _putchar
 * Return: 0 on success
 */
int main(void)
{
	char a[] = "_putchar";
	int i = 0;

	for (i = 0; 1 < 8; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');

	return (0);
}
