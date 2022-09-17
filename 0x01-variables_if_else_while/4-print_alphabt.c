#include <stdio.h>
/**
 * main - main entry
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		putchar(c);
	}
	putchar('\n');
	return (0);
}
