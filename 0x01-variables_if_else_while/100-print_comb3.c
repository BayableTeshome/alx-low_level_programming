#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * print last digit
 * Return: 0 (Success)
 */

int main(void)
{
	int n = '0', m;

	while (n <= '8')
	{
		m = n + 1;
		while (m <= '9')
		{
			putchar(n);
			putchar(m);
			if (n++ != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

