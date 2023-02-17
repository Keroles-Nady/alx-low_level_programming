#include <stdio.h>
/**
 * main - Print all numbers of base 10, starting from 0.
 * You can only use `putchar` twice.
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
