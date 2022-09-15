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
	
	digit = i % 10;

	if (digit < 0)
	{
		digit *= -1;
	}
	_putchar('0' + digit);
	return (digit);
}
