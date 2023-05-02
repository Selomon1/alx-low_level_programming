#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: a pointer of the head of the listint_t list
 * Return: the head node’s data (n)
 *	or if the linked list is empty, 0
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int n;

	list = *head;

	if (list == NULL)
		return (0);

	*head = list->next;
	n = list->n;
	free(list);
	return (n);
}
