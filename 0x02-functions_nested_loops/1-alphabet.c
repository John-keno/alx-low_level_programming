#include "main.h"

/**
 * main - Entry point
 *
 * Description: Print all alphabet in lower case using custom library
 *
 * Return: always 0 (success)
 */
int print_alphabet(void)
{
	char x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
	return (0);
}
