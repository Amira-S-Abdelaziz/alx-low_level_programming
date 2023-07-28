#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet_x10 - function
 * Return: smthing
 */
void print_alphabet_x10(void)
{
	char a;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}
