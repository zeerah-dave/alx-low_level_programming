#include <stdio.h>
/**
 * main - Lowercase alphabets in reverse order
 *
 * Return: Always 0 (Sccess)
 */
int main(void)
{
	char list[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 26; i > 0; i--)
	{
		putchar(list[i]);
	}
	putchar('\n');
	return (0);
}
