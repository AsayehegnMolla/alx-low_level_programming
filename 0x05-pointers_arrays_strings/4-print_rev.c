#include "main.h"

/**
 * print_rev - print in reverse
 * @s: string to be reversed
 *
 * Return: void funtion
 **/

void print_rev(char *s)
{
	int len, i;

	for (i = 0; s[i] !=0; i++)
		len++;

	for (i = len-1; i >= 0; i--)
		printf("%c", s[i]);
	putchar('\n');
}
