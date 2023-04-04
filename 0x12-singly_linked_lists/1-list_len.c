#include <stdlib.h>
#include "lists.h"
/**
 * list_len - counts the length of a linked list
 * @h: pointer to the first node
 *
 * Return: return the length of the list
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t count = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
