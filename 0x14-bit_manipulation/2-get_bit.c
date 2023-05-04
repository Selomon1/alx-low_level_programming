#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int input
 * @index: the index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int ind_bit;

	if (index > 63)
		return (-1);
	ind_bit = (n >> index) & 1;
	return (ind_bit);
}
