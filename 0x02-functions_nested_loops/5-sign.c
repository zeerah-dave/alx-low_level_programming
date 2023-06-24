#include "main.h"
#include <stdio.h>

/**
 * print_sign - Prints sign 
 * of a number.
 *
 * @n: Ths is an integer representing numbers.
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else 
	{
		_putchar(48);
		return (0);
	}
	putchar('\n');
}
