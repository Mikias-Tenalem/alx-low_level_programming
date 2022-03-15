#include <stdio.h>
/**
 * main -Main function
 * Description - prints _putchar followed by new line
 * Return: Void
 */
void putchar_string(char *s)
{
	int i = 0;
	
	while (s[i] != '\n' && s[i] != '\0')
	{
		putchar (s[i]);
		++i;
	}
}

void print_alphabet(void);
