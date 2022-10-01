#include <stdio.h>
/**
 * main - prints all arguments passed through the command line
 * @argc: int
 * @argv: one dimensional array
 * Return: 0
 */

int main(int argc, char **argv)
{
	int count;
	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
