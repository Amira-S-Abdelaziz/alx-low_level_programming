#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _isalpha - function
 * @c: var
 * Return: smthing
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
