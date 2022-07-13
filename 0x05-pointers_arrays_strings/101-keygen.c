#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point to Keygen for a valid password
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	unsigned int x, num, max;
	time_t t1;

	max = 125;
	srand((unsigned int) time(&t1));
	for (x = 1; x <= 21; x++)
	{
		num = rand() % max;
		printf("%c", num);
	}
	printf("\n");
	return (0);
}
