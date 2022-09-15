#include "main.h"
/**
 * _islower - checks if alphabet is lowercase or not
 * @c: letter value
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	int num;

	if (c >= 'a' && c <= 'z')
	{
		num = 1;
	}
	else
	{
		num = 0;
	}
	return (num);
}
