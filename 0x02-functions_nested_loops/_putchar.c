#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints out the character c with a trailing new line
 * @c: the character to print
 *
 * Return: Always 1. (Successs)
 * on error, -1 is returned, and errno is set appropriatey.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
