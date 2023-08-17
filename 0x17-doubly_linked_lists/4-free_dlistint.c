#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: head pointer
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *freed;

	while (head != NULL)
	{
		freed = head->next;
		free(head);
		head = freed;
	}
}
