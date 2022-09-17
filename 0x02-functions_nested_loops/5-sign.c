#include "main.h"
/**
 * print_sign - prototype for task
 * @n: variable to look at
 * Return: various outputs
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	{
	else if (n == 0)
	{
		return (0);
		_putchar(0);
	}
	{
			else
				return (-1);
			_putchar('-');
	}

}
