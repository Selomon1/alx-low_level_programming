#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: the list of the listint_t
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr, *temp, *head;
	unsigned int x, y;

	if (h == NULL || *h == NULL)
		return (0);

	ptr = *h;
	head = *h;
	x = 0;

	while (head != NULL)
	{
		temp = *h;
		for (y = 0; y < x; y++)
		{
			if (temp == ptr)
			{
				*h = NULL;
				return (x);
			}
			temp = temp->next;
		}
		ptr = head->next;
		free(head);
		head = ptr;
		x++;
	}
	*h = NULL;
	return (x);
}
