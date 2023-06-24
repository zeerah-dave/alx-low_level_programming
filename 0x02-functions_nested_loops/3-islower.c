#include "main.h"

/**
 * islower(int c) - Prints lowercase
 * characters.
 * c - is an imteger
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
