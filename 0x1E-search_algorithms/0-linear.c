#include <stddef.h>
#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array using linear
 * @array: point to the first element of the array
 * @size: number of elements in the array
 * @value: searching value
 * Return: Index where the value located, -1 if not found.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
