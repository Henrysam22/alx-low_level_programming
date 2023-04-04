#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the whole list
 * @head: pointer to the first node of the list
 */
void free_list(list_t *head)
{
	list_t *temp = head;

	while (temp != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
