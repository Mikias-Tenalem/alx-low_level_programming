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

	int j;

	for (i = -1; s[i] != '\0'; i++)
	{
	}
	j = i;
	for (j >= 0; j--)
	{
		printf("%c", s[j]);
	}
	printf("\n");
}
