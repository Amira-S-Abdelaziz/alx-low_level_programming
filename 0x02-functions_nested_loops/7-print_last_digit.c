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
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
