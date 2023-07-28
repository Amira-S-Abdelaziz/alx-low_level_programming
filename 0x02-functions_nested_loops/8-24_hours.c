#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * jack_bauer - function
 * Return: zero
 */
void jack_bauer(void)
{
	char a, b, c, d;
	int flag = 0;

	for (a = '0' ; a <= '2'; a++)
	{
		for (b = '0' ; b <= '9'; b++)
		{
			for (c = '0'; c <= '5'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					_putchar(a);
					_putchar(b);
					_putchar(':');
					_putchar(c);
					_putchar(d);
					_putchar('\n');
					if (a == '2' && b == '3' && c == '5' && d == '9')
					{
						flag = 1;
						break;
					}
				}
				if (flag == 1)
					break;
			}
			if (flag == 1)
				break;
		}
		if (flag == 1)
			break;
	}
}

