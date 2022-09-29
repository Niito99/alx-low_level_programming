#include "main.h"
/**
 * _print_rev_recursion - Prints the reverse of a string
 * @s: the string passed as a parameter
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i; j > 0; j--)
	{
		_putchar(s[j]);
	}
}
