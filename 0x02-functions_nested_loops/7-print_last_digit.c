#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - prints the last digit of a number
 * @i: the value of the number as parameter
 * Return: the value of the last digit
 */

int print_last_digit(int i)
{
	int digit;

	if (i < 0)
	{
		i = i * -1;
		digit = i % 10;
		_putchar('0' + digit);
	}
	else
	{
		digit = i % 10;
		_putchar('0' + digit);
	}

	return (digit);
}
