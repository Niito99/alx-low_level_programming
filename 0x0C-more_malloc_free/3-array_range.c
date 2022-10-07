#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: the starting value of the array
 * @max: the starting value of the array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *list;
	int i;
	int x = min;

	if (min > max)
	{
		return (NULL);
	}
	list = malloc(sizeof(int) * ((max + 1) - min));
	if (list == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max; i++)
	{
		list[i] = x;
		x++;
	}
	return(list);
}
