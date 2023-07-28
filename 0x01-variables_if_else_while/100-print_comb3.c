#include <stdio.h>
/**
 * main - function
 * Return: zero
 */
int main(void)
{
	int a, b;

	for (a = (int)'0'; a <= (int)'9'; a++)
	{
		for (b = a + 1; b <= (int)'9'; b++)
		{
			putchar(a);
			putchar(b);
			if (a == '8' && b == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
