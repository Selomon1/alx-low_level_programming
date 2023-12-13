#include <stdio.h>
#include "search_algos.h"

/**
 * liner_search - Searches for a value in an array using linear
 * @array: point to the first element of the array
 * @size: number of elements in the array
 * @value: searching value
 * Return: Index where the value located, else if not found -1
 */

int linear_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return -1;
	for (size_t i = 0; i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;
	}
	return -1;
}
