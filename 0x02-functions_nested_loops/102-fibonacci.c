#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Return: zero
 */
int main(void)
{
	long int a = 1, b = 2, c,  count = 2;

	printf("%ld, ", a);
	printf("%ld, ", b);
	while (count < 50)
	{
		c = a + b;
		a = b;
		if (count == 49)
			printf("%ld", c);
		else
			printf("%ld, ", c);
		b = c;
		count++;
	}
	printf("\n");
	return (0);
}
