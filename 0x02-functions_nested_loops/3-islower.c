#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _islower - main function that returns 1 oe 0
 * @c: takes in a character
 * Return: 1 for lowercase and 0 for uppercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
