#include <stdio.h>
#include "main.h"
/**
 * swap_int - Changes value to 98
 * @a: Variable to be swapped
 * @b: Variable to be swapped
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int w;

	int q;

	q = *a;
	w = *b;
	*a = w;
	*b = q;
}
