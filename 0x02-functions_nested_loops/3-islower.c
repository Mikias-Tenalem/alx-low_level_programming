#include "main.h"
/**
 * _islower -Main function
 * Description- affirms lowercase alphabet followed by new line
 * Return: Void
 */
int _islower(int c)
{
	char c;

	if (c >= 'a' && c <= 'z')
	{
		putchar('1');
	}
	else
	{
		putchar('0');
	}
}
