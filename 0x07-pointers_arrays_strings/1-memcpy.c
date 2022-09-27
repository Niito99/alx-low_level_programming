#include "main.h"
/**
 * _memcpy - copies n bytes from a memory area
 * @dest: the destination of the copied bytes
 * @src: the source of the copied bytes
 * @n: the number of bytes to copy from src
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
