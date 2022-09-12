#include <stdio.h>
/**
 * main - entry point
 * code block
 * Return: 0 if successful
 */
int main(void)
{
	char character;
	int integer;
	long a_long;
	long long a_long_long;
	float a_float;

	printf("Size of a char: %lu byte(s)\n", sizeof(character));
	printf("Size of an int: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", sizeof(a_long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(a_long_long));
	printf("Size of a float: %lu byte(s)\n", sizeof(a_float));
	return (0);
}
