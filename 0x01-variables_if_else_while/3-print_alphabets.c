#include <stdio.h>

/**
 * Printing alphabets in lower and upper case
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	char list[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(list[i]);
	}
	putchar('\n');
	return (0);
}
