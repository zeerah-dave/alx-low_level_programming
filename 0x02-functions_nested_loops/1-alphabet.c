#include "main.h"
#include <stdio.h>
/**
 * main - Prints the alphabet, in lowercase.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
