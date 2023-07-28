#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * times_table - function
 * Return: smthing
 */
void times_table(void)
{
	int i, j, ans;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			ans = j * i;
			if (ans < 10 && j != 0)
				printf(",  ");
			else if (ans >= 10 && j != 0)
				printf(", ");
			printf("%d", ans);
		}
		printf("\n");
	}
}


