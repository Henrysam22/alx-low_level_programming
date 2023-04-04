#include "lists.h"

/**
 * pop_listint - deletes a node
 * @head: double pointer to the first node in the list
 *
 * Return: head node's data or 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int value;

	if (*head == NULL || head == NULL)
		return (0);

	temp_node = *head;
	value = (*head)->n;
	*head = (*head)->next;
	free(temp_node);

	return (value);
}
