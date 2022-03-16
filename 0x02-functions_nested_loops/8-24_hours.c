#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * jack_bauer - main function that returns 1, 0 or -1
 * @n: takes in a character
 * Description: shows if input is positive, negative or zero
 * Return: 1 for positive, -1 for negative and 0 for 0
 */
void jack_bauer(int n)
{
	int x = 0;
	int j = 0;

	while (x <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j += 1;
		}
		x += 1;
	}
}
