#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch = 'ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz';

	int i;
	for (i = 0;i < strlen(ch);i++)
	{
		putchar(ch[i]);
		putchar("\n");
	}

	return (0);
}
