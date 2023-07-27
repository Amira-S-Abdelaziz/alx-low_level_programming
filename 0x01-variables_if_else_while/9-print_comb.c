#include <stdio.h>
/**
 * main - function
 * Return: zero
 */
int main(void)
{
	int a;

	for (a = (int)'0' ; a <= (int)'9'; a++)
	{
		putchar(a);
		if (a != (int)'9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
