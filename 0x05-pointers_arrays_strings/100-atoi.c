#include "main.h"

/**
 * _atoi - converts string to an integer.
 * @s: Param string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int count, size = 0, x = 0, y = 1, z = 1, k;

	for (count = 0; *(s + count) != '\0'; count++)
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			y *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				z *= 10;
			size++;
		}
		count++;
	}
	for (k = count - size; k < count; k++)
	{
		x = x + ((*(s + k) - 48) * z);
		z /= 10;
	}
	return (x * y);
}
