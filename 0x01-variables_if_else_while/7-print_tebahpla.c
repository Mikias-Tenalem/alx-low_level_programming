#include <stdio.h>
/**
 * main -Main function
 * Description - Lower Case alphabet letters
 * Return: Void
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');
	return (0);
}
