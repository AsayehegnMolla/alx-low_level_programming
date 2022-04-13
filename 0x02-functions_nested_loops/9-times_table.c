#include "main.h"

/**
 * times_table - Prints the 9 times table, starting from 0.
 */

void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <=9 ; i++)
	{
		_putchar('0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			mult = i * j;
			_putchar(mult);
			if (j == 9)
				_putchar('$');
		}
		_putchar('\n');
	}
}
