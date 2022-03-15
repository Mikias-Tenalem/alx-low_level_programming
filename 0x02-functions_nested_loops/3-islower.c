#include "main.h"
/**
 * _islower -Main function
 * Description- affirms lowercase alphabet followed by new line
 * Return: Void
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return(1);
	}
	else
	{
		return(0);
	}
}
