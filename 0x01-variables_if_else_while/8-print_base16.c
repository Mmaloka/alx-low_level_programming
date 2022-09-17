#include <stdio.h>
/**
 * main - main entry
 * Return: 0
 */
int main(void)
{
	int num = 0;
	char n = 'a';

	for (num = 0; num <= 9; num++)
	{
		putchar(num + '0');
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
