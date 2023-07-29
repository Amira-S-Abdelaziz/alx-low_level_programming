#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_number - function
 * @n: var
 * Return: smthing
 */
void print_number(int n)
{
	int i = 0, j = 1, ten = 1, t, n2 = n;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	do {
		n2 = n2 / 10;
		j++;
	} while (n2 != 0);
	do {
		ten = 1;
		for (t = 2; t < j; t++)
			ten = ten * 10;
		i += ((n % 10) * ten);
		n = n / 10;
		j--;
	} while (n != 0);
	do {
		_putchar((i % 10) + '0');
		i = i / 10;
	} while (i != 0);
}
