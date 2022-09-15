#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints to 98
 *
 * @n: integer value
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("98");
		printf("\n");
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("98");
		printf("\n");
	}
	else
	{
		printf("%d\n", n);
	}
}
