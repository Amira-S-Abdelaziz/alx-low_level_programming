#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - function
 * @n: var
 * Return: smthing
 */
int print_last_digit(int n)
{
	long int a;

	a = (long int)n;
	if (a < 0)
		a = a * -1;
	_putchar((a % 10) + '0');
	return ((int)(a % 10));
}
