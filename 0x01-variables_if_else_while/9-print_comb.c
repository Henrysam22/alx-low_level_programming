#include <stdio.h>

/**
 * main - prints number from 0 to 9 separated by  comma followed by a space
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
	return (0);
}
