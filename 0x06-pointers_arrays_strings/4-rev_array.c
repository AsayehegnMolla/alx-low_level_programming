#include "main.h"

/**
 * reverse_array - function to reverse string
 * @a: array to be reversed
 * @n: number of elements of array
 *
 * Return: void function
 */

void reverse_array(int *a, int n)
{
	int j = 0;

	n--;
	while (j < n)
	{
		swap_int(a + n, a + j);
		n--;
		j++;
	}
}

/**
 * swap_int - swap integers of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: void funtion
 */

void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
