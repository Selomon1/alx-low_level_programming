#include "main.h"

/**
 * flip_bits - return the number of bits you need to flip
 * @n: the 1st number
 * @m: the 2nd number
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int f_bits;

	for (f_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			f_bits++;
	}
	return (f_bits);
}
