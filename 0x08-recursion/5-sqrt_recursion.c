#include "main.h"
/**
 * _sqrt_recursion - finds the sqrt of a number
 * find_sqrt - checks if a num is a square root
 * @num: the number being checked
 * @root: the root being checked for
 * Return: the square root of the num
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
