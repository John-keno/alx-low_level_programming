#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: Params pointer.
 * @size: Params matrix size
 * Return: always void
 */

void print_diagsums(int *a, int size)
{
	int x, s1 = 0, s2 = 0;

	for (x = 0; x < (size * size); x++)
	{
		if (x % (size + 1) == 0)
			s1 += *(a + x);
		if (x % (size - 1) == 0 && x != 0 && x < size * size - 1)
			s2 += *(a + x);
	}
	printf("%d, %d\n", s1, s2);
}
