#include <stdio.h>
/**
 * main -Main function
 * Description - Lower Case alphabet letters
 * Return: Void
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		if (c != 'q' && c != 'e')
		putchar(c);
	putchar('\n');
	return (0);
}
