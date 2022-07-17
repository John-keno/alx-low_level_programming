#include "main.h"

/**
 * _isupper - Returns if uppercase
 * @c: Param int character in int
 * Return: 1 (uppercase). 0 (not uppercase)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
