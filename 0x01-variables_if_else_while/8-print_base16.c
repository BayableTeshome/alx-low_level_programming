#include <stdio.h>

/**
 * main - Entry point
 * display alphabetes
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;

	while (n <= 57)
		putchar(n++);
	n = 97;
	while (n <= 102)
		putchar(n++);
	putchar(10);
	return (0);
}
