#include "main.h"

/**
 * puts2 - print every other character to stdout
 * @str: string to be printed
 *
 * Return: void funtion
 **/
void puts2(char *str)
{
	int var;

	for (var = 0; str[var] != '\0'; var++)
	{
		if (var % 2 == 0)
		{
			putchar(str[var]);
		}
	}
	putchar('\n');
}
