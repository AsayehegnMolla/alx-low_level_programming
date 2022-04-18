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

<<<<<<< HEAD
=======
	len = strlen(s);
>>>>>>> c63edaa222fe4f48f3a553f1b0be82dd008b71b9
	return (len);
}
