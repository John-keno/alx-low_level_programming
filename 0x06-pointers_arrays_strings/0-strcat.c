#include "main.h"
/**
 * _strcat -function to concatenates two strings
 *
 * @dest: param string to append to
 * @src: param string to add
 *
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int ct1, ct2 = 0;

	for (ct1 = 0; dest[ct1] != '\0'; ct1++)
	{
	}
	while (src[ct2] != '\0')
	{
		dest[ct1] = src[ct2];
		ct1++;
		ct2++;
	}
	dest[ct1] = '\0';
	return (dest);
}
