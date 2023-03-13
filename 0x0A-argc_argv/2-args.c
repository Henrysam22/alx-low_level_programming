#include <stdio.h>
#include "main.h"

/**
 * main - prints all the arguments that was passed to main.
 * @argc: number of arguments
 * @argv: array of arguments strings
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
