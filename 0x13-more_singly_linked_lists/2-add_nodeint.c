#include "lists.h"

/**
 * add_nodeint - adds a new node to the beginning of the linked list
 * @head: double pointer to the first node of the list
 * @n: the integer value we want to add to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	lisint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;
	return (new);
}
