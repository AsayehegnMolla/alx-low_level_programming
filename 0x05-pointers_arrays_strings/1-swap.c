#include "main.h"

/**
 * swap_int - swap integers of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: void funtion
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

