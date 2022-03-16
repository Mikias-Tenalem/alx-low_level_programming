#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_last_digit - main function that returns 1, 0 or -1
 * @n: takes in a character
 * @p: Describes the last digit
 * Description: shows if input is positive, negative or zero
 * Return: 1 for positive, -1 for negative and 0 for 0
 */
int print_last_digit(int n)
{
	int p;
	
	p = n % 10;
	return (p);
}	
