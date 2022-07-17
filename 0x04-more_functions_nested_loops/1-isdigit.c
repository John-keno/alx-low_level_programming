#include "main.h"

/**
 * _isdigit - Returns if digit
 * @c: Param character in int
 * Return: 1 (digit). 0 (not digit)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
