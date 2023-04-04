#include "lists.h"

/**
 * listint_len - counts the elements of the linked list
 * @h: pointer to the first node of the list
 *
 * Return: return number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		node_count++;
		temp = temp->next;
	}
	return (node_count);
}
