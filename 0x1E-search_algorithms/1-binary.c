#include "search_algos.h"
#include <stdio.h>
#include <stddef.h>

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: points to the first element of the array
 * @size: number of elements in the array
 * @value: searching value
 * Return: Index where the value is, else -1 if not found/NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;
	
	while (left <= right)
	{
		size_t mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (size_t i = left; i <= right; ++i)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
