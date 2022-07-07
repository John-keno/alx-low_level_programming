#include "main.h"

/**
 * main - Entry point
 *
 * Description: Prints _putchar
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char a[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int j;

	for (j = 0; j < 8; j++)
	{
		_putchar(a[j]);
	}
	_putchar('\n');

	return (0);
}
