#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_last_digit - main function that returns 1, 0 or -1
 * @n: takes in a character
 * Description: shows if input is positive, negative or zero
 * Return: 1 for positive, -1 for negative and 0 for 0
 */
int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
		n *= -1;

	_putchar(n + '0');
	return (n);
}
