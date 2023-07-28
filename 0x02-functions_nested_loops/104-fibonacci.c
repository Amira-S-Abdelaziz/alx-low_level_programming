#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Return: zero
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c,  count = 0;

	printf("%ld, ", a);
	count++;
	printf("%ld, ", b);
	count++;
	while (count < 98 - 1)
	{
		c = a + b;
		a = b;
		printf("%ld, ", c);
		b = c;
		count++;
	}
	printf("%ld", c);
	printf("\n");
	return (0);
}
