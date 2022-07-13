#include "main.h"

/**
 * _atoi - converts string to an integer.
 * @s: Param string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int count, x = 0, y = -1, z = 0;

	for (count = 0; s[count] != '\0'; count++)
	{
		if (s[count] == '-')
			y = y * -1;

		if ((s[count] >= '0') && (s[count] <= '9'))
		{
			x = x * 10;
			x -= (s[count] - '0');
			z = 1;
		}
		else if (z == 1)
			break;
	}
	x = x * y;
	return (x);
}
