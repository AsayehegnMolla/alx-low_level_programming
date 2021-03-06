#include "main.h"

/**
 * print_rev - print in reverse
 * @s: string to be reversed
 *
 * Return: void funtion
 **/
void print_rev(char *s)
{
	int var, lent;

	lent = _strlen(s);
	for (var = lent - 1; var >= 0; var--)
	{
		putchar(s[var]);
	}
	putchar('\n');
}

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 **/
int _strlen(char *s)
{
	int var;
	int output = 0;

	for (var = 0; s[var] != '\0'; var++)
	{
		output += 1;
	}
	return (output);
}
