#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 */

void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			mult = i * j;
			if (mult <= 9)
				_putchar(mult + '0');
			else
			{
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
			if (j == 9)
				_putchar('$');
		}
		_putchar('\n');
	}
}
