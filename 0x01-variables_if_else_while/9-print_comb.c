#include <stdio.h>
/**
 * main - main entry
 * Return: 0
 */
int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num ++)
	{
		putchar(num + '0');
	}
	putchar(',');
	putchar(' ');
	putchar('\n');
	return (0);
}
