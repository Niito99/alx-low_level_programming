#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: letter value
 * Return: returns 1 if c is alphabet and 0 otherwise
 */
int _isalpha(int c)
{
	int num;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		num = 1;
	}
	else
	{
		num = 0;
	}
	return (num);
}
