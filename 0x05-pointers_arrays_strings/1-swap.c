#include "main.h"

/**
 * swap_int - interchanges the values of two integers that
 * are passed int as arguments
 * @a: integer value of first argument
 * @b: integer value of second argument
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;
	int d;

	d = a;
	c = b;

	a = &c;
	b = &d;
	
}
