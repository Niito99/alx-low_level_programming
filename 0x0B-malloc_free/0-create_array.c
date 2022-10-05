#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates and array of chars and allocates
 * uninitialized memory dynamically
 * @size: positive int value
 * @c: char valud to append to array
 * Return: pointer to a char array
 */

char *create_array(unsigned int size, char c)
{
	char *karat;

	if (size == 0)
	{
		return (NULL);
	}

	karat = malloc(size * sizeof(*karat));
	karat[0] = c;

	if (karat == NULL)
	{
		return (NULL);
	}

	_putchar(karat);
	free(karat);
	return (karat);


}
