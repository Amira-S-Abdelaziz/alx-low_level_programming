#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * func - function
 * @n: var
 * @i: var
 * Return: smthng
 */
int func(long double  n, long double i)
{
	if (i == 0.0 && n == 1.0)
		return (1);
	if (i == 1.0)
		return (-1);
	if (n / i == i)
		return ((int)i);
	return (func(n, i - 1.0));
}
/**
 * _sqrt_recursion - function
 * @n: var
 * Return: smthng
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
		return (func((long double) n, (long double)n - 1));
}
