#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_most_number - function
 * Return: smthng
 */
void print_most_numbers(void)
{
	int a;

	for (a = (int)'0'; a <= (int)'9'; a++)
	{
		if (a == (int)'2' || a == (int)'4')
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
