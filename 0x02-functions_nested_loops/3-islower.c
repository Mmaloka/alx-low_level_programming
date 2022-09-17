#include "main.h"
/**
 * _islower - prototype for the task
 * c: the variable
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
