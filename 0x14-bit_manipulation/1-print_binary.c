#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary rep of decimal numerals
 * @n: decimal numeral
 *
 * Return: void
 */


void print_binary(unsigned long int n)
{
	unsigned long int compare;
	int bit = 0;
	int resumed = 0;

	compare = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (compare > 0)
	{
		bit = (n & compare) ? 1 : 0;

		if (bit)
			resumed = 1;
		if (resumed)
			_putchar(bit ? '1' : '0');

		compare >>= 1;
	}
}
