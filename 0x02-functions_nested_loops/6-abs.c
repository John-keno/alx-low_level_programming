#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @x: Param number as an integer.
 *
 * Return: absolute value
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else
	{
		return (x * -1);
	}
}
