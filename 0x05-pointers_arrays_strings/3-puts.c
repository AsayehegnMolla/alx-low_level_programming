#include "main.h"

/**
 * _puts - print character to stdout
 * @str: string to be printed
 *
 * Return: void funtion
 **/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		printf("%c", str[i]);
	putchar('\n');
}
