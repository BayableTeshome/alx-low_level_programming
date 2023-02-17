#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * print last digit
 * Return: 0 (Success)
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = (n % 10) * (x < 0) ? -1 : 1;
	if (lastDigit > 5)
		printf("Last digit of %n is %n and is greater than 5\n", n, lastDigit);
	else if (lastDigit == 0)
		printf("Last digit of %n is 0 and is 0\n", n);
	else
		printf("Last digit of %n is %n and is less than 6 and not 0\n", n, lastDigit);
	
	return (0);
}
