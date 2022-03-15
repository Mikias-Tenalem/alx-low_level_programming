#include "main.h"
/**
 * _islower -Main function
 * Description- affirms lowercase alphabet followed by new line
 * Return: Void
 */
int _islower(int c)
{
	if (islower(c))
	{
		putchar('1');
	}
	else
	{
		putchar('0');
	}
}
