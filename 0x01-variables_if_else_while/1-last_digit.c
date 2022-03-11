#include <stdio.h>

#include <stdlib.h>

#include <time.h>



/* more headers goes there */

/**
 * main- main function
 * Description- Prints the task phrase
 * Return: Returns void
 *     */





/* betty style doc for function main goes there */



int main(void)



{
	int n;
	int lastDigit;
	lastDigit = int n % 10;
	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */

	if (lastDigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	else
		if (lastDigit == 0)
			printf("Last digit of %d is %d and is 0\n", n, lastDigit);
		else
			if (lastDigit == 6 && lastDigit != 0)
				printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	return (0);
}
