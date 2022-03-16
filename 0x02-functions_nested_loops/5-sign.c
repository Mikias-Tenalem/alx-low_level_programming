#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _print_sign - main function that returns 1, 0 or -1
 * @c: takes in a character
 * Return: 1 for positive, -1 for negative and 0 for 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (0);
	else
	{
		putchar('-');
		return (0);
	}
}
