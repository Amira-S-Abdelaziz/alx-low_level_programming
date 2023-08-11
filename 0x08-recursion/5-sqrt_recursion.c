#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * func - function
 * @n: var
 * @i: var
 * Return: smthng
 */
int func(int  n, int i)
{
	if (i == 0 && n == 1)
		return (1);
	if (i == 1 || i == 0)
		return (-1);
	if (n % i == 0 && (n / i) == i)
		return (i);
	return (func(n, i - 1));
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
		return (func(n, (n) / 2));
}
