#include "main.h"
#include "stdio.h"
/**
 * main - prints out the name of the program
 * @argc: parameter that represents the count of command line
 * argunmets passed to the program
 * @argv: one dimensional array of strings that represents
 * command line arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
