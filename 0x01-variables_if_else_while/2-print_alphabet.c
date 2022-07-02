#include <stdio.h>
#include <ctype.h>

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

	for (x = 97; x <= 122; x++)
	{
		putchar(tolower(x));
	}
	putchar('\n');
	return (0);
}

