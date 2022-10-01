#include "stdio.h"
/**
 * main - prints the number args passed through the command line
 * @argc: int
 * @argv: vector array
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc);
	return (0);
}
