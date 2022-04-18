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

	len = _strlen(s);
	for (i = len-1; i >= 0; i--)
		putchar(s[i]);
	putchar('\n');
}
