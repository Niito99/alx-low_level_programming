#include "main.h"
#include <stdio.h>

/**
 * rev_array - reverses the contents of an array of ints
 * @a: the array that would be reversed
 * @b: the number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 1; i--)
	{
		printf("%d", a[i]);
	}
}
