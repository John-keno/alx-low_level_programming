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
	int k;

	for (y = 0; y < 1000; y++)
	{
		x = y / 100;
		z = (y / 10) % 10;
		k = y % 10;

		if (x < z && z < k)
		{
			putchar(x + '0');
			putchar(z + '0');
			putchar(k + '0');
			if (y < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
