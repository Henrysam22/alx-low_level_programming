#include <stdio.h>
#include "main.h"

/**
 * print_rev - This function prints a string in the reverse order
 * @s: pointer parameter
 */

void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
