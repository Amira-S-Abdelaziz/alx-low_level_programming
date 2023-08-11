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
	if (i > n / 2)
		return (-1);
	if (n % i == 0 && (n / i) == i)
		return (i);
	return (func(n, i + 1));
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
		return (func(n, 2));
}
