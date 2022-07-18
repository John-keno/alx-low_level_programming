#include "main.h"
/**
 * _strchr - Returns a pointer to the first
 * occurrence of the character c in the string s,
 * or NULL if the character is not found
 * @s: Param string.
 * @c: Param character.
 * Return: c (pointer to the first occurrence of the character)
 */

char *_strchr(char *s, char c)
{
	unsigned int x;

	for (x = 0; *(s + x) != '\0'; x++)
		if (*(s + x) == c)
			return (s + x);
	if (*(s + x) == c)
		return (s + x);
	return ('\0');
}
