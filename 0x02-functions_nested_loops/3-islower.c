#include "main.h"

/**
 * int _islower - checks if character is lowercase
 *
 * Return: 1 if character is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
