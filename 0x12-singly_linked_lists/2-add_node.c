#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	const char *string = str;
	list_t *new = (list_t *)malloc(sizeof(list_t));

	while (string[len])
		len++
	if (new == NULL)
		return (null);
	new->next = *head;
	new->str = strdup(string);
	new->len = len;
	*head = new;
	return (new);
}
