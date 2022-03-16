#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _abs - main function that returns 1, 0 or -1
 * @n: takes in a character
 * Description: shows if input is positive, negative or zero
 * Return: 1 for positive, -1 for negative and 0 for 0
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * (-1));
}
