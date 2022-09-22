#include "main.h"

/**
 * *_strncpy - copies a string into another variable
 * @dest: the destination of the copied string
 * @src: the char value to be copied
 * @n: the number of chars to copy
 * Return: dest var
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
