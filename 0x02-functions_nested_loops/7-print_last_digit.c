#include "main.h"

/**
 * print_last_digit - Prints the last digit of
 * a number.
 *
 * Return: Always 0.
 */

int print_last_digit(int)
{
	int r;

	r = n % 10;
	if (l < 0)
	{
		putchar(-l +48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
