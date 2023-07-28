#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_times_table - function
 * @n: var
 * Return :smthng
 */
void print_times_table(int n)
{
	int a, b, ans;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				ans = a * b;
				if (b == 0)
				{
					printf("%d", ans);
					continue;
				}
				else
				{
					if (ans < 10)
					{
						printf(",   ");
					}
					else if (ans < 100)
					{
						printf(",  ");
					}
					else if (ans < 1000)
					{
						printf(", ");
					}
					printf("%d", ans);
				}
			}
			printf("\n");
		}
	}
}
