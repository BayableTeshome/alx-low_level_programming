#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * print combination
 * Return: 0 (Success)
 */

int main(void)
{
	int n, m, p, q;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = '0'; m <= '9'; m++)
		{
			for (p = n; p <= '9'; p++)
			{
				if (n == '0' && p != '0')
					q = '0';
				else
					q = m + 1;
				for (; q <= '9'; q++)
				{
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(p);
					putchar(q);
					if (n == '9' && m == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

