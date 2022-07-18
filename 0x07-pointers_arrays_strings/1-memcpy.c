#include "main.h"

/**
 * _memcpy - The function copies n bytes from 
 * memory area src to memory area dest
 *
 * @dest: Params pointer to char
 * @src: Param pointer to char
 * @n: size
 * Return: *dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
