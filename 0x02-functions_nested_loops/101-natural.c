#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Return: zero
 */
int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 5 == 0 || i % 3 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
