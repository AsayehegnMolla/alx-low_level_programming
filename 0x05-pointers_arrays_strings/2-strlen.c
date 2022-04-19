#include "main.h"
#include <string.h>

/**
 * _strlen - return the length of a a string
 * @s: string to be checked
 *
 * Return: lenght of string
 */

int _strlen(char *s)
{
	int len;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	
	return (len);
}
