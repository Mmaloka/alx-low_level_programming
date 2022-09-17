#include <stdio.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int n = 0;
	int n1 = n + 1;
	int n2 = n1 + 2;

	for (n = 0; n <= 9; n++)
	{
		for (n1 = n + 1; n1 <= 9; n1++)
		{
			for (n2 =n1 + 1; n2 <= 9; n2++)
			{
				putchar(n + '0');
				putchar(n1 + '0');
				putchar(n2 + '0');

				if (n < 8)
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
