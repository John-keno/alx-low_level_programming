#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print combo
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
