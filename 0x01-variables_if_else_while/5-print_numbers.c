#include <stdio.h>
/**
 * main -  Print all single digit base 10 numbers from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
