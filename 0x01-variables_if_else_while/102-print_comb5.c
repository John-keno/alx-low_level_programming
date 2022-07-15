#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print combo 4 digit
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x, y;
	int a, b, c, d;

	for (x = 0; x < 100; x++)
	{
		a = x / 10; /* doubles fnum */
		b = x % 10; /* singles fnum */

		for (y = 0; y < 100; y++)
		{
			c = y / 10; /* doubles snum */
			d = y % 10; /* singles snum */
			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');
					if (!(a == 9 && b == 8))
					{
						putchar(44);
						putchar(32);
					}
			}
		}
	}
	putchar(10);
	return (0);
}
