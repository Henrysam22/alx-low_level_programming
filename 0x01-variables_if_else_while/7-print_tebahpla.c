#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns the lower case alphabets in reverse order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
