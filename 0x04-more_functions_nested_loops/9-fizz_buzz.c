#include <stdio.h>

/**
 * main - prints multiples of 3 and 5 along with fizz buzz
 *
 * Return: 0 on success
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0)
		printf("%s", "Fizz");
	else if (i % 5 == 0)
		printf("%s", "Buzz");
	else if ((i % 3 == 0) && (i && 5 == 0))
		printf("%s", "FizzBuzz");
	else
		printf("%d ", i);
	}
	return (0);
}
