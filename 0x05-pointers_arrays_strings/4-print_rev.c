#include "main.h"

/**
 * _puts - prints a string reversed followed by a new line
 * @s: string
 * Return: Always void
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	len--;
	for (len = len; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
