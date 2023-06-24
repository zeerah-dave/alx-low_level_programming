#include "main.h"
#include <stdio.h>

/**
 * _isalpha(int c) - Checks for alphabetic
 * characters.Returns 1 if upper or lower
 * and zero otherwise.
 *
 * Return: Always 0.
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return(1);
	}
	else
	{
		return(0);
	}
	putchar('\n');
}
