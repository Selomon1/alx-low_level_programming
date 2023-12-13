#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches a value in a sorted array using jump search
 * @array: points to the first element of the array
 * @size: number of elements in the array
 * @value: searching value
 * Return: Index where the value is, -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, curr, i;

	if (array == NULL || size == 0)
		return (-1);

	step = (size_t)sqrt(size);
	prev = 0;
	curr = 0;

	while (curr < size && array[curr] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

	for (i = prev; i <= curr && i < size; ++i)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (int)i;
	}
	return (-1);
}
