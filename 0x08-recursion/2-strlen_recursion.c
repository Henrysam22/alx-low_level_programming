#include "main.h"

/**
 * _strlen_recursion - a recursive function that counts the length of a srting
 * @s: pointer to the string
 *
 * Return: program returns an integer
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
