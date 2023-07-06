#include "main.h"

/**
 * set_bit - setthe value of bit to 1 in a given index
 * @n: pointer to input
 * @index: index, starting from 0 of the bit
 * Return: 1 if it worked, or -1 if error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
