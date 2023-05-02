#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer of the first node or head
 * @n: the integer data of the new node in the listint_t list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));
	if (add_node != NULL)
	{
		add_node->n = n;
		add_node->next = *head;
	}
	else
		return (NULL);

	if (*head != NULL)
		add_node->next = *head;

	*head = add_node;
	return (add_node);
}
