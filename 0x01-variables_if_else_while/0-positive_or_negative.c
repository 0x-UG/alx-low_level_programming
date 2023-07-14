#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of thr program
 *
 * Return: 0 on success
 */

int main(void)
{
	int n;

	srand(time(0)); /* Seeds the random number generator with a random time */

	n = rand() % 21 - 10; /* Generates a random number between -10 and 10 */

	printf("The number %d", n);

	if (n > 0)
		printf(" is positive\n");
	else if (n == 0)
		printf(" is zero\n");
	else
		printf(" is negative\n");

	return 0;
}
