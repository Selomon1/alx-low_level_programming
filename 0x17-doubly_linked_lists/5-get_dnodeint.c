#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a list
 * @head: head pointer
 * @index: index of the node, starting from 0
 * Return: NULL, if the node doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	while (i < index)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
