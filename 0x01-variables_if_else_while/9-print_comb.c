#include <stdio.h>
/**
 * main - Print all possible combinations fo single-digit numbers.
 * You can only use `putchar` up to four times.
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
