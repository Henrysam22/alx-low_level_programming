#include <stdio.h>
#include "list.h"

/**
 * print_list - prints the element of a list
 * @h: pointer to first node
 *
 * Return: return node
 */
size_t print_list(const list_t *h)
{
	size_t node  = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		node++
	}
