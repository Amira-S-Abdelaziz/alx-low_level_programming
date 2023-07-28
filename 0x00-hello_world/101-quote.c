#include <stdio.h>
/**
 * main - function
 * Return: zero
 */
int main(void)
{
	char *a = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	while (1)
	{
		if (a[i] == '9')
		{
			putchar(a[i]);
			break;
		}
		putchar(a[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
