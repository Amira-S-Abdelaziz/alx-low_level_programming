#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_diagonal - function
 * @n: var
 * Return: smthing
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				if (j != i)
					_putchar(' ');
				else
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
