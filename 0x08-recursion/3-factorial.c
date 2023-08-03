#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * factorial - function
 * @n: var
 * Return: smthng
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
