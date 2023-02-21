#include "main.h"

/**
 * main - print alphabet
 * Return: 0 if exited properly, non-zero otherwise
 */

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;

	}
	_putchar('\n');

}
