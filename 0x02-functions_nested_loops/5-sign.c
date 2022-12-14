#include "main.h"
#include <stdio.h>
/**
 * print_sign - checks the sign of a number
 * @n: integer value
 * Return: 1 if n is positive, -1 if n is negative
 * and 0 if n is zero
 */

int print_sign(int n)
{
	int num;

	if (n > 0)
	{
		num = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		num = 0;
		_putchar('0');
	}
	else
	{
		num = -1;
		_putchar('-');
	}
	return (num);
}
