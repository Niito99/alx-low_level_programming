#include "stdio.h"
#include "main.h"
/**
 * main - prints the number args passed through the command line
 * @argc: int
 * @argv: vector array
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;
	printf("%d", argc - 1);
	printf("\n");
	return (0);
}
