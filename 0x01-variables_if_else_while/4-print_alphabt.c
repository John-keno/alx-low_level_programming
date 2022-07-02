#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: Print alphabet excluding q and e
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 97; x <= 122; x++)
	{
		if (x != 113 && x != 101)
			putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}
