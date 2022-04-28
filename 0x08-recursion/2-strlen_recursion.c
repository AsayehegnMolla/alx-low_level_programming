#include "main.h"

/**
 * int _strlen_recursion - measure the length of the string
 * @s: the string to be measured
 *
 * Return: the lenght od string
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		count++;
	}

	return (count);
}

