#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: input string
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	int count = 0;
	char temp;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	for (i = 0; i < count / 2; i++)
	{
		temp = s[i];
		s[i] = s[count - 1 - i];
		s[count - 1 - i] = temp;
	}
}
