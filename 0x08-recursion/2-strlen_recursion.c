#include "main.h"

/**
 * int _strlen_recursion - calculate the length of the a string
 * @s: string to be used
 *
 * Return: lenght of the string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count++;
		count += _strlen_recursion(s + 1);
	}

	return (count);
}

