#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of
 *		a listint_t linked list
 * @index: the index of the node that should be delete (Index starts at 0)
 * @head: a pointer of the head of the listint_t list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int j;
	listint_t *temp, *dup;

	if (!head || !*head)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (j = 0; j < (index - 1); j++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (-1);
	}
		dup = temp->next;
		temp->next = dup->next;
		free(dup);
		return (1);
}
