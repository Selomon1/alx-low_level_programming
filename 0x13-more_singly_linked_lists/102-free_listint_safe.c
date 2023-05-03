#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: the listint_t list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *ptr, *temp, *head;
	size_t h_i, t_i;

	if (h == NULL || *h == NULL)
		return (0);

	ptr = *h;
	head = *h;
	h_i = 0;

	while (head != NULL)
	{
		temp = *h;
		for (t_i = 0; t_i < h_i; t_i++)
		{
			if (temp == ptr)
			{
				*h = NULL;
				return (h_i);
			}
			temp = temp->next;
		}
		ptr = head->next;
		free(head);
		head = ptr;
		h_i++;
	}
	*h = NULL;
	return (h_i);
}
