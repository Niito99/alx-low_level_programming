#include "main.h"

/**
 * clear_bit - changes bit at an index to zero
 * @n: pointer to an UL int
 * @index: index to operate
 *
 * Return: 1 for success 0 for fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n = *n ^ m;

	return (1);



}
