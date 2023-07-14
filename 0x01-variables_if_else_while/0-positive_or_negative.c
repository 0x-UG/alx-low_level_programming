#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - assigns a random number to n and prints if negative
 * or positive
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0)); /* Seeds the random number generator with a random time */

	n = rand() - RAND_MAX / 2;

	printf("%d", n);

	if (n > 0)
	{
		printf(" is positive\n");
	}
	else if (n < 0)
	{
		printf(" is negative\n");
	}
	else
	{
		printf(" is zero\n");
	}
	return (0);
}
