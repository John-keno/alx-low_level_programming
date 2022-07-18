#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: Param pointer.
 * Return: Always void
 */
void print_chessboard(char (*a)[8])
{
	unsigned int x, y;

	for (x = 0; x < 64; x++)
	{
		if (x % 8 == 0 && x != 0)
		{
			y = x;
			_putchar('\n');
		}
		_putchar(a[x / 8][x - y]);
	}
	_putchar('\n');
}
