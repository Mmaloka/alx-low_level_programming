#include <stdio.h>
/**
 * main - main entry
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int n1 = 0;

	for (n = 0; n < 100; n++)
	{
		for (n1 = 0; n1 < 100; n1++)
		{
		if (n1 > n)
		{
			putchar( n / 10 + '0');
			putchar( n % 10 + '0');
			putchar(' ');
			putchar(n1 / 10 + '0');
			putchar(n1 % 10 + '0');

			if (n * 100 + n1 != 9899)
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
