#include "main.h"

/**
 * flip_bits - counts the number of binary flips to get to another number
 * @n: first number
 * @m: destination number
 *
 * Return: number of flips needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;

	for (i = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			i++;
	}
	return (i);
}
