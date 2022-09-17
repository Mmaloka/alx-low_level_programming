#include <stdio.h>
/**
 * main - main entry
 * Return: 0
 */
int main(void)
{
	char c = 'a';
	char c1 = 'A';

	for (c = 'a'; c <= 'z'; c++)
	for (c1 = 'A'; c1 <= 'Z'; c++)
		putchar(c);
		putchar(c1);
	putchar('\n');
	return (0);
}
