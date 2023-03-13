#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"


/**
 * num - checks if a character in the string is digit
 * @str:pointer to the string
 *
 * Return: 1 if only numbers and 0 if otherwise
 */

int num(char *str)
{
	unsigned int i = 0;

	while (i < strlen(str)) /*counts the length of the string*/
	{
		if (!(isdigit(str[i])))
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: value of the arguments stored in an array
 *
 * Return: return 1 if there is an error and 0 on success
 */

int main(int argc, char *argv[])
{
	int count = 1;
	int sum = 0;
	int str_to_int;

	while (count < argc)
	{
		if (num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
