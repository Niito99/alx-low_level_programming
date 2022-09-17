#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: the function accepts any character c, to check
 * if it is a digit
 * Return: returns 1 if c is a digit and 
 * zero if c is not a digit
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
