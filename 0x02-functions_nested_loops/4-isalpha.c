#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _isalpha - main function that returns 1 oe 0
 * @c: takes in a character
 * Return: 1 for lowercase and 0 for uppercase
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
		return (1);
	else
		return (0);
}
