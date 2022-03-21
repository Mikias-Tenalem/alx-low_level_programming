#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line;
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	while (i > -1)
	{
		_putchar("%c", s[i]);
		i--;
	}
	_putchar("\n");
}
