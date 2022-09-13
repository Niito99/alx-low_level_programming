#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * starting from 0 followed by a newline
 * Return: Always 0 (success)
 */

int main(void)
{
	int dig;

	for (dig = 0; dig <=9; dig++)
		putchar(dig);

	putchar('\n');


	return (0);
}
