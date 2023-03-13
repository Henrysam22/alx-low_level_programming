#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 * @argc: argument number
 * @argv: argument vector
 *
 * Return: 1 if error and 0 on success
 */

int main(int argc, char *argv[])
{
	int result, num, i = 0;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (1);
	}
	result = 0;

	while (num) /* num is not zero */
	{
		if (num >= cents[i]) /* so far number is greater or equal */
		{
			num -= cents[i];
			result += 1;
		}
		else
			i++;
	}
	printf("%d\n", result);
	return (0);
}
