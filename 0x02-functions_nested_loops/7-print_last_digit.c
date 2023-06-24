#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - Prints the last digit of
 * a number.
 *
 * @n: An integer value.
 *
 * Return: Always 0.
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	if (r < 0)
	{
		putchar(-r +48);
		return (-r);
	}
	else
	{
		_putchar(r + 48);
		return (r);
	}
}
