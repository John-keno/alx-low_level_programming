#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: prints a character in char x
 *
 * Return: 1 (success) number of byte written
 * On error: -1 returned; errno is set to indicate error.
 */

int _putchar(char x)
{
	return (write(1, &x, 1));
}
