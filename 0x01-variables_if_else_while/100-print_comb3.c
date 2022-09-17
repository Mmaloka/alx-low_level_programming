#include <stdio.h>
/**
 * main - main entry
 * Return: 0
 */
int main(void)
{
	int num = 1;
	int num2 = num + 1;

	for (num = 1; num <= 9; num++)
	{
	for (num2 = num + 1; num2 <= 9; num2++)
	{
		putchar(num + '0');
		putchar(num2 + '0');
	if (num2 < 8)
	{
		putchar(',');
		putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
