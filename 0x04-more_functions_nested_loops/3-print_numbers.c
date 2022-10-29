#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers from 0-9.
 * @n: the num to checked for
 * Return: void
 */

void print_numbers(void)
{
	char n;	

	for(n = '0'; n <= '9'; n++)
	{	
		_putchar((n % 10) + '0');
	}
	_putchar('\n');
}
