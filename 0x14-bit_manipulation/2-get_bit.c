#include "main.h"

/**
 * get_bit - return the value of bit in a given index
 * @n: input
 * @index: index, starting  from 0 of the bit
 * Return: the value of bit at index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int ind_bit;

	if (index > 63)
		return (-1);
	ind_bit = (n >> index) & 1;
	return (ind_bit);
}
