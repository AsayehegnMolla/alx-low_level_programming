#include "main.h"

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		printf("%d", str[i]);
}
