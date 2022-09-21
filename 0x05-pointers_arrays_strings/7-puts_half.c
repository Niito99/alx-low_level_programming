#include "main.h"

/**
 * puts_half - prints only half of the input char
 * @str: param passed to the func
 * Return: void
 */

void puts_half(char *str)
{
	int i = 0;
	int j = 0;
	int len;
	int k;

	while (str[i] != '\0')
	{
		j++;
		i++;
	}
	if (j % 2 == 0)
	{
		len = j / 2;
		for (k = len; k < j; k++)
		{
			_putchar(str[k]);
		}
	}
	else
	{
		len = (j - 1) / 2;
		for (k = len; k < j; k++)
		{
			_putchar(str[k]);
		}
	}
}
