#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - function
 * @n: var
 * Return: smthing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				printf("\n");
			else
				printf(", ");
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
				printf("\n");
			else
				printf(", ");
		}
	}
}
