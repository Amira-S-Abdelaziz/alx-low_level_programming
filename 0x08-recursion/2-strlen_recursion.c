#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen_recursion - function
 * @s: var
 * Return: smthng
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
