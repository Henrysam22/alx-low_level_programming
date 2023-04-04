#include "list.h"

/**
 * print_listint - print the value of the nodes
 * in the linked list
 * @h: pointer to the first node of the list
 *
 * Return: return number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
