#include "main.h"

/**
 * rev_string - prints a string correctly and reversed followed by a new line
 * @s: string
 * Return: Always void
 */
void rev_string(char *s)
{
	int len, mid, max;
	char init, last;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	max = len - 1;
	mid = max / 2;
	for (mid = mid; mid >= 0; mid--)
	{
		init = s[max - mid];
		last = s[mid];
		s[mid] = init;
		s[max - mid] = last;
	}

}
