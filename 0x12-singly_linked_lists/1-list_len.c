#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a list
 * @h: pointer of to the list_t list
 * Return: number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
