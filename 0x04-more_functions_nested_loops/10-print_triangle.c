#include "main.h"

/**
 * print_triangle - check for a digit
 * @size: Param int(size)
 * Return: Always void
 */

void print_triangle(int size)
{
	int z, y, x;

	if (size < 1)
	{
		_putchar('\n');
		return;
	}
	x = size - 1;
	for (z = 0; z < size; z++)
	{
		
		for (y = 0; y < size; y++)
			_putchar((y < x) ? ' ' : '#');
		_putchar('\n');
		x--;
	}
}
