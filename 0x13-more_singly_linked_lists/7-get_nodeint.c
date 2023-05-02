#include "lists.h"

/**
 * get_nodeint_at_index - discover the nth node of a listint_t linked list
 * @index: to find which node from the list starting at 0
 * @head: a pointer of the head of the listint_t list
 * Return: pointer to the requested nodes
 *	or if the node does not exist, NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; (i < index) && (head->next); i++)
	head = head->next;

	if (i < index)
	return (NULL);

	return (head);
}
