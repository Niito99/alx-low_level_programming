#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory space
 * @b: unsigned int param
 * Return: pointer to the allocated memory space
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *mem;

	mem = malloc(b);
	if (mem == NULL)
	{
		exit(98);
	}
	return (*mem);
}
