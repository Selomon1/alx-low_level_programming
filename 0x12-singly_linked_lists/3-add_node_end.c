#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: head of the linked list
 * @str: string to store in the new node
 * Return: the address of the new element, else NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_nodes;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_nodes = malloc(sizeof(list_t));
	if (!new_nodes)
		return (NULL);

	new_nodes->str = strdup(str);
	new_nodes->len = len;
	new_nodes->next = NULL;

	if (*head == NULL)
	{
		*head = new_nodes;
		return (new_nodes);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_nodes;

	return (new_nodes);
}
