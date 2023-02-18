#include <stdio.h>
/**
 * main - Print all possible combinations of two digits.
 * You can only use `putchar` up to 5 times.
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	int i, j, k;

	i = 0;
	while (i < 100)
	{
		j = i % 10;
		k = i / 10;

		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');

			if (i < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		i++;
	}
	putchar('\n');

	return (0);
}
