#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table
 * Return: 0
 */

void times_table(void)
{
	int n = 0;
	int num;

  while (n <= '9')
  {
	for (num = 0; num <= 9; num++)
	{
		int x = num * n;
		return (x);
		_putchar(',');
	}
	n++;
	num = '0';
  }
}
