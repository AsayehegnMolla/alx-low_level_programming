#include "main.h"

/**
 * factorial: calculate factorial of a number
 * @n: integer to be calculated
 *
 * Return: factorial of a number
 */

int factorial(int n)
{
	int product = 1;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	product = factorial(n - 1);

	return (n * product);
}
