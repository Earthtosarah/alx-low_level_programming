#include <stdio.h>
/**
 * main - entry point
 * Description - prints letters of the alphabet in  lowercase
 * Return: returns 0 on success
 */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
