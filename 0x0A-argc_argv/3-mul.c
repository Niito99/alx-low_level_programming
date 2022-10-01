#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two int
 * @argc: int
 * @arv: vector array
 * Return: 0
 */

int main(int argc, char **argv)
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error");
	}
	return (0);
}
