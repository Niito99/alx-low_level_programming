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
	int i;
	int j;

	while (str != '\0')
	{
		i++;
	}

	if (str == NULL)
	{
		return (NULL);
	}
	dup = malloc(sizeof(*dup));
	if (dup == NULL)
	{
		return (NULL);
	}


	for (j = 0; j < i; j++)
	{
		if (str[j] == '\0')
		{
			break;
		}
		dup[j] = str[j];
	}
	return (dup);
}
