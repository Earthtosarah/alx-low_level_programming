#include <stdio.h>
/**
 * main - entry point
 * Description - prints all single base 10 number from 1-10
 * Return: returns 0 on success
 */
int main(void)
{
	int a;

	for (a = 0 ; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');

	return (0);
}
