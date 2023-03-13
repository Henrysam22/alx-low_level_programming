#include "main.h"

/**
 * _puts_recursion - prints string followed by a new line
 * @s: pointer to string
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	unsigned int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
