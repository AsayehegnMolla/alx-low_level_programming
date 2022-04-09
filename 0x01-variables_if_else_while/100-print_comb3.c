#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		num2 = num1 + 1;
		for (num2 ; num2 <= '9'; num2++)
		{
			if (num1 == num2)
				continue;
			else
			{
				putchar(num1);
				putchar(num2);
			}

			if (num1 < '9')
			{
				putchar(',');
				putchar(' ');
			}

			
		}
	}

	return (0);
}
