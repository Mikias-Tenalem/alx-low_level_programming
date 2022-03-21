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

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = i; j >= 0; j--)
	{
		if (s[j] != '\0')
		{
			printf("%c", s[j - 1]);
		}
		else
		{
			break;
		}
	}
	printf("\n");
}
