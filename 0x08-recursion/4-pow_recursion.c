#include "main.h"

/**
 * _pow_recursion - program calculates the value of x to the power of y
 * @x: integer value/variable
 * @y: integer value/variable
 *
 * Return: always return integer
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 0)
		return (0);
	/*if (!(y < 0))*/
	return (x * _pow_recursion(x, y - 1));
}
