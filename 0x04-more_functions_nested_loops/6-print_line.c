#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_line - funtion
 * @n: var
 * Return: smthing
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
