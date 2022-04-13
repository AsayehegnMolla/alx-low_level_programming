#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - Prints all natural numbers from input to 98
 * @n: the number to begincounting at
 */

void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
	}
	else
	{
		for (n = n; n <= 98; n++)
		{
			if (n == 98)
				printf("%d", n);
			else
				printf("%d, ", n);
		}
	}
	putchar('\n');
}
