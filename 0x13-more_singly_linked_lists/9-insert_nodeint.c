#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node to
 *	a listint_t list at a given position
 * @idx: the index of the list where the new node
 *	should be added (Index starts at 0)
 * @n: the value of the new node to be added
 * @head: a pointer of the head of the listint_t list
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add_node, *temp;

	temp = *head;
	add_node = malloc(sizeof(listint_t));
	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	if (idx == 0)
	{
		add_node->next = temp;
		*head = add_node;
		return (add_node);
	}
	while (idx > 1)
	{
		temp = temp->next;
		idx--;
		if (!temp)
		{
			free(add_node);
			return (NULL);
		}
	}
	add_node->next = temp->next;
	temp->next = add_node;
	return (add_node);
}
