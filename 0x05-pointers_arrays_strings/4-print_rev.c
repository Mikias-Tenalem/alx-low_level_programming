#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line;
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	while (i > -1)
	{
		printf("%c", s[i]);
		i--;
	}
	printf("\n");
}
