#include <stdio.h>

/**
 * main - A program that prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
       	int num1;
	int num2;
	for (num1 = 0; num1 < 100; num1++) 
	{
		for (num2 = num1; num2 < 100; num2++)
		{
			int num1_tens = num1 / 10;
			int num1_ones = num1 % 10;
			int num2_tens = num2 / 10;
			int num2_ones = num2 % 10;
			putchar(num1_tens / 10 + '0');
			putchar(num1_tens % 10 + '0');
			putchar(num1_ones / 10 + '0');
			putchar(num1_ones % 10 + '0');
			putchar(' ');
			putchar(num2_tens / 10 + '0');
			putchar(num2_tens % 10 + '0');
			putchar(num2_ones / 10 + '0');
			putchar(num2_ones % 10 + '0');
			if (num1 != 99 || num2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return 0;
}
