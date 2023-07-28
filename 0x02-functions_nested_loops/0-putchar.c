#include <stdio.h>
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
		putchar(s[i]);
		if (s[i] == 'r')
			break;
		i++;
	}
	putchar('\n');
	return (0);
}
