#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array of integers.
 * @a: Params array.
 * @n: Params elements
 * Return: always void.
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x != n - 1)
			printf(", ");
	}
	printf("\n");
}
