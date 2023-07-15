#include <stdio.h>

/**
 * main - prints outs a string literal
 * Description: prints outs a string to stdout without printf and puts
 *
 * Return: the integer 1
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(str, 1);

	return (1);
}
