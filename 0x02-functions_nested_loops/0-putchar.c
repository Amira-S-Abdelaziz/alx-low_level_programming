#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"
/**
 * main - function
 * Return: zero
 */
int main(void)
{
	char *s = "_putchar";
	int i = 0;

	while (1)
	{
		_putchar(s[i]);
		if (s[i] == 'r')
			break;
		i++;
	}
	_putchar('\n');
	return (0);
}
