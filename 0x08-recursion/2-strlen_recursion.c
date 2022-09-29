#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string passed as a parameter
 * Return: int value
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}
	return (n);
}
