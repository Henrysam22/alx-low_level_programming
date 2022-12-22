#include "main.h"

/**
 * _strcmp - Function that compares two strings.
 *
 * @s1: first string
 * @s2: second string
 * Return: Value less than 0 if string is less than the other
 * value, greater than 0 if string is greater than the other
 * and 0 if the strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	int counter, comVal;

	counter = 0;

	while (s1[counter] == s2[counter] && s1[counter] != '\0')
	{
		counter++;
	}

	comVal = s1[counter] - s2[counter];
	return (comVal);
}
