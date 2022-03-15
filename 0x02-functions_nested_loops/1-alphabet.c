#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main -Main function
 * Description - prints _putchar followed by new line
 * Return: Void
 */
void print_alphabet(void)
{
	char i;

	for (i ='a'; i <= 'z'; i++)
		putchar(i);
}
int main(void)
{
	print_alphabet();
	putchar ('\n');
	return (0);
}
