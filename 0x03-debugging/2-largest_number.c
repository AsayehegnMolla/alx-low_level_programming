#include "main.h"

/**
 * largest_number - print the largest number
 * @a: first integer
 * @b: secound integer
 * @c: third integer
 * Return: largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= c && b >= a)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	return (largest);
}
