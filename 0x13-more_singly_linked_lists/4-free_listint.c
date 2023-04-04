#include "lists.h"
/**
 * free_listint - frees an entire linked list
 * @head: pointer to the first node in the list
 */

void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
