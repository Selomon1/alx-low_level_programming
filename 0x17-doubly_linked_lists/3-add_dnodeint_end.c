#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the list
 * @n: a new node to insert
 * @head: head pointer
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *add_enode;

	add_enode = malloc(sizeof(dlistint_t));

	if (!add_enode)
		return (NULL);

	add_enode->n = n;
	add_enode->next = NULL;
	add_enode->next = NULL;

	if (!(*head))
	{
		*head = add_enode;
		return (add_enode);
	}
	else
	{
		temp = *head;
		while (temp && temp->next)
			temp = temp->next;
		add_enode->prev = temp;
		temp->next = add_enode;
	}
	return (add_enode);
}
