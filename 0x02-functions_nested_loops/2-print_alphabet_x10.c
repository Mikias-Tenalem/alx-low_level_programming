#include "main.h"
/**
 * print_alphabet_x10 -Main function
 * Description- prints 10 timews lowercase alphabet followed by new line
 * Return: Void
 */
void print_alphabet_x10(void)
{
	int c = 1;

	while (c = 1 || c <= 10)
	{
		char i;

		for (i = 'a'; i <= 'z'; i++)
		{
			putchar(i);
		}
		putchar('\n');
		c++;
	}
}
