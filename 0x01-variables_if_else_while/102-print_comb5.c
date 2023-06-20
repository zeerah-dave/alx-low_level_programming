#include <stdio.h>

/**
 * main - Print possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_1;
	int num_2;

	for (num_1 = 0; num_1 < 100; num_1++)
	{
		for (num_2 = 0; num_2 < 100; num_2++)
		{
			if (num_1 < num_2)
			{
				putchar((num_1 / 10) + 48);
				putchar((num_1 % 10) + 48);
				putchar(' ');
				putchar((num_2 / 10) + 48);
				putchar((num_2 % 10) + 48);
				if (num_1 != 98 || num_2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
