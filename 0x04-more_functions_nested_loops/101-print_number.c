#include "main.h"
void print_unsigned_int(unsigned int n);
/**
 * print_number - print number n using _putchar
 * @n: Param integer
 * Return: Always void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_unsigned_int(-(unsigned int)n);
	}
	else
		print_unsigned_int(n);
}
/**
 * print_unsigned_int - prints an unsigned integer
 * @n: Param unsigned integer
 * Return: Always void
*/
void print_unsigned_int(unsigned int n)
{
	if (n / 10 != 0)
	{
		print_unsigned_int(n / 10);
	}
	_putchar((n % 10) + '0');
}
