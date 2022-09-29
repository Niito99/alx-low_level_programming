#include "main.h"
/**
 * _pow_recursion - raises a number x to the power y
 * @x: the number to power
 * @y: the degree to raise to the power to
 * Return: -1 if y is lower than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));

}
