#include "main.h"

/**
 * _islower - Returns 1 if the input is a
 * lowercase charactert or else returns 0
 *
 * @c: Params for character in ASCII code
 *
 * Return: 1 for lowercase character. 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
