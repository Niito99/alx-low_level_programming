#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the contents of an array of ints
 * @a: the array that would be reversed
 * @n: the number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int charAc;
	int j = 0;
	int i = n - 1;

	while (j <= i)
	{
		charAc = a[j];
		a[j] = a[i];
		a[i] = charAc;
		i--;
		j++;
	}
}
