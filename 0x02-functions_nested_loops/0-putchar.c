#include "main.h"
#include <string.h>
/**
 * main - Prints _putchar, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	char my_char[] = "_putchar";
	int len_char = strlen(my_char);

	for (i = 0; i < len_char; i++)
	{
		putchar(my_char[i]);
	}
	putchar('\n');
	return (0);
}
