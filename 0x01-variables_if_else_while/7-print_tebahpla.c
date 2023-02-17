#include <stdio.h>
/**
 * main - Print the alphabet in reverse order in lowercase.
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
