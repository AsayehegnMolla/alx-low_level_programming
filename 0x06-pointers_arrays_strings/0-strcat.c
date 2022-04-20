#include <stdio.h>
#include "main.h"

/*
 * _strcat - function that concatenates two strings
 * @dest: destenation of addition
 * @src: string to be added
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, count = 0;

	for (i = 0; dest[i] != '\0'; i++)
		count++;
	for (j = 0; src[j] != '\0'; j++)
		dest[count + j] = src[j[;
	dest[count + j] ='\0';

	return (dest);
}
