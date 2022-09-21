#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: param of str type passed
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = strlen(s) - 1;

	while (s[i])
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
