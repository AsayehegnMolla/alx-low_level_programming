#include "main.h"

/**
 * print_times_table - Prints the n times table, starting from 0
 * @n: takes an integer.
 */

void print_times_table(int n)
{
	int i, j, mult;
	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j<= n; j++)
			{
				mult = i * j;
				if (mult <= 9)
				{
					if (j > 0)
					{
						_putchar(' ');
						_putchar(mult + '0');
					}
					else
						_putchar(mult + '0');
				}
				else
				{
					if (mult <= 100)
					{
						_putchar((mult / 10) + '0');
						_putchar((mult % 10) + '0');
					}
					else
					{
						_putchar((mult / 100) + '0');
						_putchar(((mult % 100)) / 10 + '0');
						_putchar((mult % 10) + '0');
					}
				}
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
				if  (mult <= 99)
					_putchar(' ');
				if (mult <= 9)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
