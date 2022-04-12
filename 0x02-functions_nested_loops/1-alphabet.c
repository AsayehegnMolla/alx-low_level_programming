#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet - pritn small case alphabet
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
}
