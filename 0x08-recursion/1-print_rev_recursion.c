#include "main.h"
/**
 * _print_rev_recursion - Prints the reverse of a string
 * @s: the string passed as a parameter
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
