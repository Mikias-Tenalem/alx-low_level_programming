#include <stdio.h>
#include "main.h"
/**
 * reset_to_98 - Changes value to 98
 * @n - Variable to be changed
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int *p;

	*p = &n;
	*p = 98;
	return (0);
}
