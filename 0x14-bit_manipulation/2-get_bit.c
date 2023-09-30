#include "main.h"

/**
 * get_bit - gets the bit value at binary index
 * @n: the decimal number
 * @index: the specified binary index
 *
 * Return: number of index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
		return (0);
	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (i == index)
			return (n & 1);
	}
	return (-1);
}
