#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Return: zero
 */
int main(void)
{
	long int a = 1, b = 2, c,  sum = 0;

	sum = sum + b;
	while (1)
	{
		c = a + b;
		a = b;
		if (c > 4000000)
			break;
		if (c % 2 == 0)
			sum = sum + c;
		b = c;
	}
	printf("%ld\n", sum);
	return (0);
}
