#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string passed as parameter
 * @c: the character to be located in a string
 * Return: NULL if not found and pointer the
 * first occurence of the character c
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return ((char *)s);
		}
	} while (*s++);
	return (0);
}
