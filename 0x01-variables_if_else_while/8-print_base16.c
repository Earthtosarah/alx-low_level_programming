#include <stdio.h>
/**
 * main - entry point
 * Description - prints letters of the alphabet in  lowercase and uppercase
 * Return: returns 0 on success
 */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
