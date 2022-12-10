#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets except e an q
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
