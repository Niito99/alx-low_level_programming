#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 *
 * @min: the staring value
 * @max: the ending value
 *
 * Return: pointer to allocated memory
 */
int *array_range(int min, int max)
{
	int *m;
	int i;
	int x = min;

	if (min > max)
	{
		return (NULL);
	}
	m = malloc(sizeof(int) * ((max + 1) - (min)));
	if (m == NULL)
	{
		return (NULL);
	}
	for (i = 0; x <= max; i++)
	{
		m[i] = x;
		x++;
	}
	return (m);
}
