#include "main.h"

/**
 * print_numbers - print num from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar (c);
		c++;
	}
	_putchar('\n');
}
