#include "main.h"

/**
 * print_most_numbers - prints the numbers 0 to 9
 * excluding 2 and 4
 *
 * Return: Always void
 */
void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		if (x == 50 || x == 52)
		{
			x++;
		}
		_putchar(x);
	}
	_putchar('\n');
}
