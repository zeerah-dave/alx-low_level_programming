#include <stdio.h>
#include "main.h"
/**
 * main - Prints _putchar, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	char my_char[8] = "_putchar";

	for (i = 0; i < 8; i++)
	{
		putchar(my_char[i]);
	}
	putchar('\n');
	return (0);
}
