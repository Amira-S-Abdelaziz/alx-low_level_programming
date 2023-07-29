#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * Return: zero
 */
int main(void)
{
	long int i, j, flag = 0, n = 612852475143, mx = 0;

	for (i = 2; i < n; i++)
	{
		flag = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j != 0 && i != j)
				continue;
			else
			{
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			continue;
		else
		{
			while (n % i == 0 || n != 0 || n != 1)
			{
				n = n / i;
				if (mx < i)
					mx = i;
			}
		}
		if (n == 1)
			break;
	}
	printf("%ld\n", mx);
	return (0);
}
