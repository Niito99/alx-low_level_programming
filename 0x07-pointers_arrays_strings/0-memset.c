#include "main.h"
/**
 * *_memset - fills the first n bytes of a memory area
 * by a constant byte b
 * @s: pointer to the memory area
 * @b: the constant byte that fills the memory area
 * @n: an unsigned int n repping the number of bytes to fill
 * Return: the pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	
	while (n != 0)
	{
		*p++ = b;
		n--;
	}
	return (s);
}
