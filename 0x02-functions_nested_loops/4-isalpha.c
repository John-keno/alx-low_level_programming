#include "main.h"

/**
 * _isalpha - Returns 1 if the input is an alphabet
 * or else returns 0
 *
 * @c: Params for character in ASCII code
 *
 * Return: 1 for letters. 0 for non letters
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
