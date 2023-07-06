#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: binary string
 * Return: the converted number, or 0 if chars in the string
 *	b is not 0 or 1, or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int con_num = 0;
	int j;

	if (!b)
		return (0);
	for (j = 0; b[j]; j++)
	{
		if (b[j] < '0' || b[j] > '1')
			return (0);
		con_num = 2 * con_num + (b[j] - '0');
	}
	return (con_num);
}
