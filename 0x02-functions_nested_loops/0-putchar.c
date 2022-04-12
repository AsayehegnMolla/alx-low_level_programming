#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char name[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		putchar(name[i]);
	}
	putchar('\n');
	
	return (0);
}
