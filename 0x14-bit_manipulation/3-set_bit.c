#include "main.h"

/**
 * set_bit - sets the bit at an index to 1
 * @n: pointer to an UL int
 * @index: index to be set to 1
 *
 * Return: 1 for success and -1 for fail
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int i;
	unsigned long int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);

}
