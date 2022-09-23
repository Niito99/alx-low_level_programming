#include "main.h"
#include <stdio.h>

/**
 * rev_array - reverses the contents of an array of ints
 * @a: the array that would be reversed
 * @n: the number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	j = n - 1;

	for (i = j; i >= 0; i--)
	{
		printf("%d", a[i]);
	}
}
