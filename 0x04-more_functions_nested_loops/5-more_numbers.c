#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * more_numbers - function
 * Return: smthing
 */
void more_numbers(void)
{
	int a, i, b;

	for (b = 0; b < 10; b++)
	{
		for (i = 0; i <= 1; i++)
		{
			for (a = 0; a <= 9; a++)
			{
				if (i == 1 && a == 5)
					break;
				if (i == 1)
					_putchar(i + '0');
				_putchar(a + '0');
			}
		}
		_putchar('\n');
	}
}

