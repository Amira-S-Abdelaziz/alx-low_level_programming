#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Return: zero
 */
int main(void)
{
	long int a = 1, b = 2, c,  sum = 0;

	sum = sum + a + b;
	while (1)
	{
		c = a + b;
		a = b;
		if (c > 4000000)
			break;
		sum = sum + c;
		b = c;
		count++;
	}
	printf("%ld\n", sum);
	return (0);
}
