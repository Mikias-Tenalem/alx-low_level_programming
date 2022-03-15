#include "main.h"

/**
 * main - check the code for Holberton School students.
 * Description - lowercase alphabet printing
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
