#include <stdio.h>

/**
 * main - Entry point
 * display alphabetes
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
		putchar(n--);
	putchar(10);
	return (0);
}
