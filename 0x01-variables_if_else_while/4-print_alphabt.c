#include <stdio.h>
/**
 * Print alphabets except q and e
 *
 * Return; Always 0 (Success)
 */
int main(void)
{
	char list[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (list[i] != 'q' && list[i] != 'e')
		{
			putchar(list[i]);
		}
	}
	putchar('\n');
	return (0);
}
