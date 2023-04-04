#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - appends new node to the linked list
 * @head: pointer to first node
 * @str: string value of the new node
 *
 * Return: return address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *temp = *head;
	const char *string = str;
	list_t *new = (list_t *)malloc(sizeof(list_t));

	while (string[count] != '\0')
		count++;

	if (new == NULL)
		return (NULL);
	new->len = count;
	new->str = strdup(string);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
		return (new);
	}
}
