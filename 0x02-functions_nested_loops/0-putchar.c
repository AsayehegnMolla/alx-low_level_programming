#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char name[] = "_putchar";

	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(name[i]);
	}
	putchar('\n');

	return (0);
}
