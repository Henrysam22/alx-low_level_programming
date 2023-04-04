#include "lists.h"

/**
 * insert_nodeint_at_index - adds new node at the specified index
 * @head: double pointer to the first node
 * @idx: index where we want to store new node
 * @n: value to be stored in the new node
 *
 * Return: address of the new node or Null if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head;
	listint *new;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	if (idx == 0)
	{
		temp = *head;
		head = new;
		new->next = temp;
		return (new);
	}

	if (temp)
	{
		while (i < idx)
		{
			if (i == idx - 1)
			{
				new->next = temp->next;
				temp->next = new;
				return (new);
			}
			temp = temp->next;
			return (NULL);
		}
