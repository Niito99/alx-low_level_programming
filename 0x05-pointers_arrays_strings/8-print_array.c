#include "main.h"
#include <stdio.h>
/**
 * print_array -prints the elems of an array
 *
 * @a: pointer value
 * @n: pointer value
 *
 */
void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		if ((i + 1) != n)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
			printf("\n");
		}
	}
}
