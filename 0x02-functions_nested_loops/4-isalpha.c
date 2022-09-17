#include "main.h"
/**
 * _isalpha - prototype for task
 * @c: variable for task
 * Return: 1 if success otherwise 0
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
	{
		return (1);
	}
	else
		return (0);
}
