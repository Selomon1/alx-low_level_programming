#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds new node at the beginning of a linked list
 * @head: head of the linked list
 * @str: new string to add in the node
 * Return: the address of the new element, else NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nodes;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_nodes = malloc(sizeof(list_t));
	if (!new_nodes)
		return (NULL);

	new_nodes->str = strdup(str);
	new_nodes->len = len;
	new_nodes->next = *head;
	*head = new_nodes;

	return (*head);
}
