#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer of the head of the listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *list;

	if (head == NULL)
		return;

	while (*head)
	{
		list = *head;
		*head = (*head)->next;
		free(list);
	}
	head = NULL;
}
