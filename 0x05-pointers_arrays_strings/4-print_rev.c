#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse with a new line
 * @s: input string
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\n')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
