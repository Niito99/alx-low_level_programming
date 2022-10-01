#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers passed in
 * @argc - int
 * @argv - one dimensional array of args passed
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i;
	int inc;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			inc = atoi(argv[i]);
			if (inc == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += inc;
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
