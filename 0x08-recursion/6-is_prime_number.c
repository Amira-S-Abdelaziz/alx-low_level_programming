#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * func - function
 * @n: var
 * @i: var
 * Return: smthng
 */
int func(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (func(n, i - 1));
}
/**
 * is_prime_number - function
 * @n: var
 * Return: smthng
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	return (func(n, n / 2));
}

