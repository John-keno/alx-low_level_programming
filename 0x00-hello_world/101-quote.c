#include <unistd.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry Point
 *
 * Description: Print without printf and puts
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, x, strlen(x));
	return (1);
}
