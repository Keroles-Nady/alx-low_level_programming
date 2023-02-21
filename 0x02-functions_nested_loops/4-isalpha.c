#include "main.h"

/**
 * main - checks for alphabetic character
 * Return: 0 if exited properly, non-zero otherwise
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
