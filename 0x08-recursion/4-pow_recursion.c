#include "main.h"

/**
 * _pow_recursion - calculate the n(th)power of a number
 * @x: number to be used
 * @y: the exponent
 *
 * Return: the n(th) power of a number
 */

int _pow_recursion(int x, int y)
{
	int product;

	if ( y < 0)
		return (-1);
	else if (y == 0)
		return (0);
	product = _pow_recursion(x, y - 1);

	return (x*x);
}
