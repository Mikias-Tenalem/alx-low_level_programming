#include "main.h"

/**
 * main -Main function
 * Description - prints lowercase alphabet followed by new line
 * Return: Void
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
