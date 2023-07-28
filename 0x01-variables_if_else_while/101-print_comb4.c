#include <stdio.h>
/**
 * main - function
 * Return: zero
 */
int main(void)
{
	int a, b, c;
	int flag = 0;

	for (a = (int)'0'; a <= (int)'9'; a++)
	{
		for (b = a + 1; b <= (int)'9'; b++)
		{
			for (c = b + 1; c <= (int)'9'; c++)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == '7' && b == '8' && c == '9')
				{
					flag = 1;
					break;
				}
				putchar(',');
				putchar(' ');
			}
			if (flag == 1)
				break;
		}
		if (flag == 1)
			break;
	}
	putchar('\n');
	return (0);
}
