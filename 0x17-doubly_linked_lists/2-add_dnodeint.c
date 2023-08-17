#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of the list
 * @n: new node to add
 * @head: head pointer
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_bnode;

	add_bnode = malloc(sizeof(dlistint_t));
	if (add_bnode == NULL)
		return (NULL);
	add_bnode->n = n;
	add_bnode->next = *head;
	add_bnode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = add_bnode;
	*head = add_bnode;
	return (*head);
}
