#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates the content of a newly allocated pointer to a string
 * @str: string passed as param
 * Return: pointer to a string
 */

char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	dup = malloc(sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	while (str)
	{
		str = dup;
	}
	return (dup);
}
