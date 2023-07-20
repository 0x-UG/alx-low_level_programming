#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 15; i++)
	{
		_putchar(i + '0');

		for (j = 0; j <= 10; j++)
			_putchar('\n');
	}
	_putchar('\n');
}
