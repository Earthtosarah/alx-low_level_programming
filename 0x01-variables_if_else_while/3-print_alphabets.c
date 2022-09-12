#include <stdio.h>
/**
 * main - entry point
 * Description - prints letters of the alphabet in  lowercase and uppercase
 * Return: returns 0 on success
 */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	for (a = 'A'; a <= 'Z'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
