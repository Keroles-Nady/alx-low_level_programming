#include <stdio.h>
/**
 * main - use `putchar` to print all letters but the letter 'q' and 'e'.
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
