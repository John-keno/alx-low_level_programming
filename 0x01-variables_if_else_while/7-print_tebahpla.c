#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: Print alphabet in lower case reversed
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 122; x >= 97; x--)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
