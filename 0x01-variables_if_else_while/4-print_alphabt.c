#include <stdio.h>
/**
 * main - entry point
 * Description - prints letters of the alphabet in  lowercase excluding q and e
 * Return: returns 0 on success
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
	}
	putchar('\n');

	return (0);
}
