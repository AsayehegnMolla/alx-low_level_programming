#include "main.h"

/**
 * factorial: calculate factorial of a number
 * @n: integer to be calculated
 *
 * Return: factorial of a number
 */

int factorial(int n)
{
	int sum = 1;

	while (n > 0)
	{
		sum *= n;
		factorial(n - 1);
	}

	return (sum);
}
