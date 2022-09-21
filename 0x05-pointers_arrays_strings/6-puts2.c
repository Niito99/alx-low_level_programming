#include "main.h"

/**
 * puts2 - prints every other character
 * @str: argument of string type passed
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
		j += 1;
	}
	for (i = 0; i < j; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
