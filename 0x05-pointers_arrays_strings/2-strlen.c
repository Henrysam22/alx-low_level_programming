#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that prints the length of a string
 * @S: string to be supplied
 * Return: Always i (Success)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
