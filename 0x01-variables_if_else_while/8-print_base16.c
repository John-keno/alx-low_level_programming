#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: Print all Hex in lower case
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char x;
	char y;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (y = 97; y <= 102; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
