#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of two ints
 * @a: pointer 1
 * @b: pointer 2
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
