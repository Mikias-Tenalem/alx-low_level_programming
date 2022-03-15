#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * main -Main function
 * Description - prints _putchar followed by new line
 * Return: Void
 */
void putchar_string(char *s)
{

	int i = 0;

	while (s[i] != '\n' && i != '\0')
	{
		putchar (s[i]);
		i++;
	}
}
int main(void)
{
	char s[] = "_putchar";
	
	putchar_string(s);
	putchar ('\n');
	return (0);
}
