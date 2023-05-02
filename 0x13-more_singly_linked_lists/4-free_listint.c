#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 * @head: a pointer of the head of the listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list);
	}
}
