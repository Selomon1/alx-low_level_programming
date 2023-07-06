#include "main.h"

/**
 * clear_bit - set the value of bit to 0 in a given index
 * @n: pointer to input
 * @index: index, starting from 0 of the bit
 * Return: 1 if it works, or -1 if error occur
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
