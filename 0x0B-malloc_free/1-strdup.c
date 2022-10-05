#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates the content of a newly allocated pointer to a string
 * @str: string passed as param
 * Return: pointer to a string
 */

char *_strdup(char *str)
{
	char *x;
	char n = 'a';
	int i;
	int l;

	if (str == NULL)
	{
		return (NULL);
	}
	for (l = 0; n; l++)
	{
		n = str[l];
	}

	x = malloc(sizeof(char) * l);

	if (x == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		x[i] = str[i];
	}
	return (x);
}
