#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer of the first node or head
 * @n: the integer data of the new node in the listint_t list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node, *temp;

	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);

	add_node->n = n;
	add_node->next = NULL;

	if (*head == NULL)
		*head = add_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = add_node;
	}

	return (add_node);
}
