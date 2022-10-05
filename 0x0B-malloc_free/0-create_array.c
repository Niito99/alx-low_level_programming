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
		return;
	}
	if (karat == NULL)
	{
		return (*karat);
	}
	karat = malloc(size * Sizeof(char));
	karat[0] = 'f';
	_putchar(karat);
	free(karat);

}
