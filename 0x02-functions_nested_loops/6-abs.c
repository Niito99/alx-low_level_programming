#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @i: integer value
 * Return: the absolute value of the integer
 */

int _abs(int i)
{
	int abs;

	if (i > 0)
	{
		abs = i;
	}
	else if (i < 0)
	{
		abs = i * -1;
	}
	else
	{
		abs = 0;
	}
	return (abs);
}
