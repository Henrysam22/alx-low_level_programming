#include "lists.h"

/**
 * get_nodeint_at_index - gets the node at an i dex
 * @head: pointer to the first node
 * @index: node we want to get values from
 *
 * Return: return node address or NULL if node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int n = 0;

	while (n < index && temp != NULL)
	{
		temp = temp->next;
		n++;
	}

	return (temp ? temp : NULL);
}
