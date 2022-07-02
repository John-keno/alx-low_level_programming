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

	for (x = 96; x <= 112, x++;)
	{
		putchar(tolower(x));
	}
	return (0);
}

