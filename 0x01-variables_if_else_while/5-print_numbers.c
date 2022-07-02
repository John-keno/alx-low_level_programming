#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all alphabet in lower case
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
