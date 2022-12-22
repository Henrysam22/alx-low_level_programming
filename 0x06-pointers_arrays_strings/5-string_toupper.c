#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @word: pointer to the string
 * @Return: pointer to uppercase string
 */

char *string_toupper(char *word)
{
	int length;
	lenght = 0;

	while (word[length] != '\0')
	{
		if (word[length] >= 97 && word[length] <= 122)
		{
			word[length] = word[length] - 32;
		}
		length++;
	}
	return (word);
}
