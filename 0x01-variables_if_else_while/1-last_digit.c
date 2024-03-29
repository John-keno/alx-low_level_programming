#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: random prints the last digit of n
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;
	int nLast;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	nLast = n % 10;

	if (nLast > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, nLast);
	else if (nLast == 0)
		printf("Last digit of %d is %d and is 0\n", n, nLast);
	else if (nLast < 6)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, nLast);
	return (0);
}
