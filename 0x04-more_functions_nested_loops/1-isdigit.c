#include "main.h"

/**
 * _isdigit - if is a digit
 * @c: char to check
 *
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
