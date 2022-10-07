#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory space
 * @b: unsigned int param
 * Return: pointer to the allocated memory space
 */

void *malloc_checked(unsigned int b)
{
	int *mem;

	mem = malloc(sizeof(*mem) * b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (*mem);
}
