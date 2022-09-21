#include "main.h"

/**
 * _puts - prints a string to the standard output
 * @str: char passed as param
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
