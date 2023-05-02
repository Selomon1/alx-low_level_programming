#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: the pointer of the header
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
