#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 *
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	_putchar('\n');
}
