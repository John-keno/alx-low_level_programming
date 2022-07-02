#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: Print numbers 0 to 9 without char
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
