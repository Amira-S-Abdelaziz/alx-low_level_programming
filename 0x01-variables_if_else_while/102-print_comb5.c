#include <stdio.h>
/**
 * main - function
 * Return: zero
 */
int main(void)
{
	int a, b, c, d;

	for (a = (int)'0'; a <= (int)'9'; a++)
	{
		for (b = a; b <= (int)'9'; b++)
		{
			for (c = b; c <= (int)'9'; c++)
			{
				for (d = c + 1; d <= (int)'9'; d++)
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a == (int)'9' && b == (int)'8' && c == (int)'9' && d == (int)'9')
					{
						putchar('\n');
						return (0);
					}
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
