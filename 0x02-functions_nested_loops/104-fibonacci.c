#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Return: zero
 */
int main(void)
{
	unsigned long long int a = 1, b = 2, c,  count = 0;

	printf("%lld, ", a);
	count++;
	printf("%lld, ", b);
	count++;
	while (count < 98 - 1)
	{
		c = a + b;
		a = b;
		printf("%lld, ", c);
		b = c;
		count++;
	}
	printf("%lld", c);
	printf("\n");
	return (0);
}
