#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - print the integer data
 * list of listint_t
 *
 * @h: the first pointer of the link
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t no_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		no_nodes++;
		h = h->next;
	}

	return (no_nodes);
}
