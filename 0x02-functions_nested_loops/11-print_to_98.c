#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from input to 98
 * @n: the number to begincounting at
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n; n >=98; n--)
			printf("%d, ", n);
	}
	else
	{
		for (n; n <= 98; n++)
			printf("%d, ", n);
	}
}
