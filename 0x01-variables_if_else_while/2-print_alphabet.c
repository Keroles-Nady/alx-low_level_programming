#include <stdio.h>
/**
 * main - use `putchar` function to print the alphabet in lowercase.
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
