#include <stdio.h>
/**
 * main - Prints the largest prime factor of 612852475143.
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int x, y, pr1;

	pr1 = -1;
	x = 612852475143;

	while (x % 2 == 0)
	{
		pr1 = 2;
		x = x / 2;
	}
	for (y = 3; y <= x / 2; y = y + 2)
	{
		while (x % y == 0)
		{
			pr1 = 1;
			x = x / y;
		}
	}
	if (x > 2)
		pr1 = x;

	printf("%ld\n", pr1);
	return (0);
}
