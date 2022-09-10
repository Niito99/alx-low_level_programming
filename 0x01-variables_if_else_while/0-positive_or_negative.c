#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* 
 * main - function assigns a random number to int n
 * Everytime the code is run ;
 * the random number is printed out;
 * and wether it is negative or positive is also printed out
 * The main function returns zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	return (0);
}
