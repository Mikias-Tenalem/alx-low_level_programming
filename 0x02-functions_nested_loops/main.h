#include <stdio.h>
/**
 * main -Main function
 * Description - prints _putchar followed by new line
 * Return: Void
 */
void print_alphabet(void);
void putchar_string(char *s)
{
	int i = 0;
	
	while (s[i] != '\n' && s[i] != '\0')
	{
		putchar (s[i]);
		++i;
	}
}
