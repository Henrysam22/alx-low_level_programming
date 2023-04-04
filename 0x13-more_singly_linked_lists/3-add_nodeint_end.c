#include "lists.h"

/**
 * add_nodeint_end - adds node to the end of the list
 * @head: double pointer to the firt node in the linked list
 * @n: integer value we want to add to the new node
 *
 * Return: on success, address of the new node and NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *h = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (h->next != NULL)
		h = h->next;
	h->next = new;
	return (new);
}
