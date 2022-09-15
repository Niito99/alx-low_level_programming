#include "main.h"
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
		printf("+");
	}
	else if (n == 0)
	{
		num = 0;
		printf("0");
	}
	else
	{
		num = -1;
		printf("-");
	}
	return (num);
}
