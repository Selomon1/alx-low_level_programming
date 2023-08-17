#include "lists.h"

/**
 * dlistint_len - identify the number of elements or nodes in the list
 * @h: head pointer
 * Return: the number of elements or nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
		h = h->next;
	return (n);
}
