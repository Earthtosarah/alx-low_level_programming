#include <stdio.h>
/**
 * main - entry point
 * Description - prints letters of the alphabet in  lowercase excluding q and e
 * Return: returns 0 on success
 */
int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
