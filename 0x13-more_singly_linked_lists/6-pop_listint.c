#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: a pointer of the head of the listint_t list
 * Return: the head node’s data (n) or if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int n;

	list = *head;

	if (list == NULL)
		return (0);

	n = list->n;
	*head = list->next;
	free(*head);

	return (n);
}
