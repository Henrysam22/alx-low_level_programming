#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function copies string pointed to src and dest
 * @dest: pointer parameter
 * @src: pointer parameter
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		len++;
	}

	*(dest + len) = '\0';
	return (dest);
}
