#include <stdio.h>

/**
 * main - Entry point
 * display alphabetes
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 97;

	while (n <= 122)
		if (n == 101 || n == 113)
			n++;
		else
			putchar(n++);
	putchar(10);
	return (0);
}
