#include "main.h"

/**
 * puts_half - prints second half of a string.
 * @str: string
 * Return: Always void.
 */

void puts_half(char *str)
{
	int count, len;

	for (count = 0; count >= 0; count++)
	{
		if (str[count] == '\0')
			break;
	}
	if (count % 2 == 1)
	{
		len = count / 2;
	}
	else
	{
		len = (count - 1) / 2;
	}
	for (len++; len < count; len++)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
