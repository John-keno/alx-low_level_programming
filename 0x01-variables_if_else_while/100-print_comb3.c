#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print combo 2 digit
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x;
	int y;
	int z;

	for (y = 0; y < 100; y++)
	{
		x = y % 10;
		z = y / 10;

		if (z < x)
		{
			putchar(x + '0');
			putchar(z + '0');
			if (y < 89)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}

