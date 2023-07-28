#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Return: zero
 */
int main(void)
{
	int a = 1, b = 2, c,  count = 2;

	printf("%d, ", a);
	printf("%d, ", b);
	while (count < 50)
	{
		c = a + b;
		a = b;
		if (count == 49)
			printf("%d", c);
		else
			printf("%d, ", c);
		b = c;
		count++;
	}
	return (0);
}
