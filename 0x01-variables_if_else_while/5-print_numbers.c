#include <stdio.h>
/**
 * main - Print all numbers of base 10, starting from 0.
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
