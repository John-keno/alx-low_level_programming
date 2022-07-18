#include "main.h"

/**
 * _memset - The function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: Params to pointer
 * @b: Params data to change
 * @n: param index
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
	return (s);
}
