#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 *
 * @x: Params pointer 1
 * @y: Params pointer 2
 *
 * Return: Always void
 */

void swap_int(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
