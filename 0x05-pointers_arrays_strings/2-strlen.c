#include "main.h"

/**
 * _strlen - finds the length of the string
 * @s: the char passed as a parameter
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
