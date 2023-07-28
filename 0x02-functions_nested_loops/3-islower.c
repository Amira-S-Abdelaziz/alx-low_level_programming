#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _islower - function
 * @c: var
 * Return: zero
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
