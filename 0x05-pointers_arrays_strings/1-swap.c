#include "main.h"

/**
 * reset_to_98 - update a variable to 98 using a pointer
 * @n: points to the variable n
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

