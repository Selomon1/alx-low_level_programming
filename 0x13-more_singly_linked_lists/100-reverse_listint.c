#include "lists.h"
#include <stdio.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: the head of the listint_t list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *last;

	first = NULL;
	last = NULL;

	while (*head != NULL)
	{
		last = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = last;
	}

	*head = first;
	return (*head);
}
