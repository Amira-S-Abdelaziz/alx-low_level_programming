#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_square - function
 * @size: var
 * Return: smthing
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
