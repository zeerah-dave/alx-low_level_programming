#include "main.h"

/**
 * int print_sign(int n) - Prints sign 
 * of a number.
 *
 * Return: Always 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return(1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return(-1);
	}
	else 
	{
		_putchar(48);
		retfurn(0);
	}
	putchar('\n');
}
